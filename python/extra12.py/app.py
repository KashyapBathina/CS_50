# Implements a registration form, storing registrants in a dictionary, with error messages

from cs50 import SQL
from flask import Flask, redirect, render_template, request

db = SQL("sqlite:///goats.db")

app = Flask(__name__)

REGISTRANTS = {}

PLAYERS = [
    "Basketball",
    "Soccer",
    "Ultimate Frisbee"
]


@app.route("/")
def index():
    return render_template("index.html", players=PLAYERS)


@app.route("/register", methods=["POST"])
def register():

    # Validate name
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Missing name")

    # Validate sport
    player = request.form.get("player")
    if not player:
        return render_template("error.html", message="Missing player")
    if player not in PLAYERS:
        return render_template("error.html", message="Invalid player")

    # Remember registrant
    REGISTRANTS[name] = player

    # Remember registrant
    db.execute("INSERT INTO registrants (name, sport) VALUES(?, ?)", name, player)


    # Confirm registration
    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    return render_template("registrants.html", registrants=REGISTRANTS)