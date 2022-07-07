import os

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from tempfile import mkdtemp
from werkzeug.security import check_password_hash, generate_password_hash

from helpers import apology, login_required, lookup, usd

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")

# Make sure API key is set
if not os.environ.get("API_KEY"):
    raise RuntimeError("API_KEY not set")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/")
@login_required
def index():
    """Show portfolio of stocks"""
    return apology("TODO")


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""

    if request.method == "POST":
        if (not request.form.get("stock")) or (not request.form.get("shares")):
            return apology("must provide stock symbol and number of shares")

        if int(request.form.get("shares")) <= 0:
            return apology("must provide valid number of shares")

        quote = lookup(request.form.get("stock"))

        if quote == None:
            return apology("Stock symbol not valid, please try again")

        cost = int(request.form.get("shares")) * quote['price']

        cash_available = db.execute("SELECT cash FROM users WHERE id=:id", id=session["user_id"])

        if cost > cash_available[0]["cash"]:
            return apology("you do not have enough cash for this stock")

        db.execute("UPDATE users SET cash = cash - ? WHERE id = ?", cost, id=session["user_id"]);

        db.execute("INSERT INTO orders (user_id, symbol, shares, price, timestamp) VALUES (?, ?, ?, ?, ?)",
        session["user_id"], quote["symbol"], quote["shares"], quote["price"], time_now())

    else:
        return render_template("buy.html")

@app.route("/history")
@login_required
def history():
    """Show history of transactions"""

    rows = db.execute("SELECT symbol, shares, price, timestamp FROM orders WHERE user_id = ?", session["user_id"])

    if not rows:
        return apology("You have no transactions recorded")

    return render_template("history.html", rows = rows)


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""

    if request.method == "POST":
        quote = lookup(request.form.get("quote"))
        if not quote:
            return apology("Either the stock does not exist or you have provided the incorrect symbol", 403)

        return render_template("quote.html", quote=quote)

    else:
        return render_template("quote.html")


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""

    if request.method == "POST":
        username = request.form.get("username")
        password = request.form.get("password")
        confirmation = request.form.get("confirmation")
        all_usernames = db.execute("SELECT username FROM users")


        if not username or not password or not confirmation:
            return apology("must fill in all fields", 403)

        if password != confirmation:
            return apology("passwords must match", 403)

        if username in all_usernames:
            return apology("username already in use", 403)

        result = db.execute("INSERT INTO users (username, hash) VALUES(?, ?)", username, generate_password_hash(password))

        session["user_id"] = result[0]["id"]

    else:
        return render_template("register.html")

@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""

    owns = own_shares()

    if request.method == "POST":
        if (not request.form.get("stock")) or (not request.form.get("shares")) or (int(request.form.get("shares"))) <= 0:
            return apology("must provide stock symbol or/and valid number of shares")

        if owns[symbol] < int(request.form.get("shares")):
            return apology("There cannot sell more shares than you own", 403)

        cash = db.execute("SELECT cash FROM users WHERE id = ?", session["user_id"])[0]['cash']

        quote = lookup(request.form.get("stock"))

        remaining = cash + quote["price"] * request.form.get("shares")

        db.execute("UPDATE users SET cash = ? WHERE id = ?", remaining, session["user_id"])

        db.execute("INSERT INTO orders (user_id, symbol, shares, price, timestamp) VALUES (?, ?, ?, ?, ?)", session["user_id"], request.form.get("stock"), request.form.get("shares"), quote["price"], time_now())

    else:
        return render_template("sell.html", owns = owns.keys())

@app.route("/add_cash", methods=["GET", "POST"])
@login_required
def add_cash():
    """Add money"""
    if request.method == "POST":

        if request.form.get("credit_card") != "4806013822":
            return apology("This is an invalid credit card number", 403)

        if request.form.get("money") > 100000:
            return apology("Your card declined", 403)

        db.execute("UPDATE users SET cash = cash + ? WHERE id = ?", request.form.get("money"), id=session["user_id"]);

    else:
        return render_template("add_cash.html")

def time_now():
    ## Get current time
    now_utc = datetime.now(timezone.utc)
    return str(now_utc.date()) + ' @time ' + now_utc.time().strftime("%H:%M:%S")

def own_shares():
    # Stocks the user owns, and numbers of shares owned
    owns = {}
    query = db.execute("SELECT symbol, shares FROM orders WHERE user_id = ?", session["user_id"])
    for q in query:
        symbol, shares = q["symbol"], q["shares"]
        owns[symbol] = owns.setdefault(symbol, 0) + shares
    # filter zero-share stocks
    owns = {k: v for k, v in owns.items() if v != 0}
    return owns