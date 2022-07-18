import os
from datetime import datetime, timezone
from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from tempfile import mkdtemp
from werkzeug.security import check_password_hash, generate_password_hash
from helpers import apology, login_required
import re
from trycourier import Courier
import string
import random
from flask import Flask, jsonify, render_template, request







# automatically inputs students into classes
# sends email to students once gradebook is updated
# forgot password email confirmation
# sends email with code once registered
# hmsdjsdrkcwxfwaw









user = {}

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True


# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///darkmoon.db")

@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET"])
def homepage():
    return render_template("homepage.html")


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure email was submitted
        if not request.form.get("email"):
            return apology("must provide email adress", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for email
        rows = db.execute("SELECT * FROM users WHERE email = ?", request.form.get("email"))

        # Ensure email exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid email and/or password", 403)

        if rows[0]["type"] != request.form.get("type"):
            return apology("invalid account type", 400)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]
        session["email"] = rows[0]["email"]
        session["name"] = rows[0]["name"]
        session["type"] = rows[0]["type"]

        # Redirect user to home page
        return redirect("/index")


    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/login")


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""

    if request.method == "POST":
        email = request.form.get("email")
        password = request.form.get("password")
        confirmation = request.form.get("confirmation")
        first = request.form.get("first")
        last = request.form.get("last")
        variety = request.form.get("type")
        school = request.form.get("school")
        role = request.form.get("role")
        organization = request.form.get("organization")
        number = request.form.get("number")

        if str(variety) == "none":
            return apology("must choose your account type", 400)


        if str(variety) == "teacher":
            if not email or not password or not confirmation or not first or not last or not school or not role or not number or str(organization) == "none":
                return apology("must fill in all fields", 400)

            if not re.match("^[\dA-Z]{3}-[\dA-Z]{3}-[\dA-Z]{4}$", number):
                return apology("must be a valid phone number", 400)


        if str(variety) == "student" or str(variety) == "gaurdian":
            if not email or not password or not confirmation or not first or not last or str(organization) == "none":
                return apology("must fill in all fields", 400)


        if not re.match(r"^[A-Za-z0-9\.\+_-]+@[A-Za-z0-9\._-]+\.[a-zA-Z]*$", email):
            return apology("must be a valid email address", 400)

        elif password != confirmation:
            return apology("passwords must match", 400)

        if len(db.execute('SELECT email FROM users WHERE email = ?', email)) > 0:
            return apology("email already in use", 400)

        code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))

        client = Courier(auth_token="pk_prod_3VNJBYM54EM107NQ0ZZ62Y7CRY67")

        resp = client.send_message(
            message={
                "to": {
                    "email": (email),
                },
                "template": "C4P4331NKF4G9MHBY4663SM7XVA3",
                "data": {
                    "name": (first),
                    "code": (code),
                },
            }
        )

        #global gcode
        #gcode = code

        session["code"] = code
        session["email"] = email
        session["password"] = password
        session["name"] = first + ' ' + last
        session["type"] = str(variety)

        return render_template("verification.html", first=first, last=last, password=password, variety=variety, role=role, organization=organization, school=school, email=email, number=number)

    else:
        return render_template("register.html")


@app.route("/verification", methods=["GET", "POST"])
def verification():
    if request.method == "POST":
        usercode = request.form.get("usercode")

        if session["code"] == str(usercode):
            db.execute("INSERT INTO users (email, hash, name, type) VALUES(?, ?, ?, ?)", session["email"], generate_password_hash(session["password"]), session["name"], session["type"])
            result = db.execute("SELECT * FROM users WHERE email = ?", session["email"])
            session["user_id"] = result[0]["id"]
            return redirect("/index")

        else:
            return apology("code is incorrect", 400)

    else:
        return render_template("verification.html")


@app.route("/index", methods=["GET", "POST"])
@login_required
def index():
    if request.method == "POST":
        return apology("not finished", 400)

    else:
        print(session["user_id"])
        return render_template("index.html", name=session["name"])


@app.route("/students", methods=["GET", "POST"])
@login_required
def students():
    if request.method == "POST":
        semail = request.form.get("semail")
        sname = request.form.get("sname")
        classesl = request.form.get("classesl")

        if not semail or not sname or str(classesl) == "none":
            return apology("you must fill out all fields", 400)

        if not re.match(r"^[A-Za-z0-9\.\+_-]+@[A-Za-z0-9\._-]+\.[a-zA-Z]*$", semail):
            return apology("must be a valid email address", 400)


        classes = db.execute("SELECT * FROM classes WHERE classname = ?", classesl.strip())

        #db.execute("INSERT INTO classes (teacherid, classname) VALUES(?, ?)", session["user_id"], cname)
        db.execute("INSERT INTO students (teacherid, classname, classid, studentname, studentemail) VALUES(?, ?, ?, ?, ?)", session["user_id"], classesl, classes[0]["classid"], sname, semail)
        return redirect("/students")

    else:
        classes = db.execute("SELECT * FROM classes WHERE teacherid = ?", session["user_id"])
        students = db.execute("SELECT * FROM students where teacherid = ?", session["user_id"])
        return render_template("students.html", classes=classes, students=students)


@app.route("/classes", methods=["GET", "POST"])
@login_required
def classes():
    if request.method == "POST":
        cname = request.form.get("cname")

        if not cname:
            return apology("you must name your class", 400)

        db.execute("INSERT INTO classes (teacherid, classname) VALUES(?, ?)", session["user_id"], cname)
        return redirect("/classes")

    else:
        classes = db.execute("SELECT * FROM classes WHERE teacherid = ?", session["user_id"])
        return render_template("classes.html", classes=classes)



@app.route("/grading", methods=["GET", "POST"])
@login_required
def grading():
    if request.method == "POST":
        cname = request.form.get("cname")



        return redirect("/grading")

    else:
        classes = db.execute("SELECT * FROM classes WHERE teacherid = ?", session["user_id"])
        students = db.execute("SELECT * FROM students where teacherid = ?", session["user_id"])
        return render_template("grading.html", classes=classes, students=students)


@app.route("/search")
def search():
    q = request.args.get("q")
    if q:
        shows = db.execute("SELECT * FROM students WHERE classname LIKE ?", "%" + request.args.get("q") + "%")
    else:
        shows = []
    return jsonify(shows)


@app.route("/gradebook", methods=["GET", "POST"])
@login_required
def gradebook():
    if request.method == "POST":

        return redirect("/gradebook")
    else:
        return render_template("gradebook.html", classes=classes, students=students)