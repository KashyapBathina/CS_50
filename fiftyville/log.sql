-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT description FROM crime_scene_reports
WHERE day = "28" AND month = "7" AND street = "Humphrey Street";

SELECT transcript FROM interviews
WHERE day = "28" AND month = "7"
AND year = "2020" AND transcript like "%courthouse%";

SELECT name FROM people
JOIN crime_scene_reports ON people.id = crime_scene_reports.id AND people.id = 295
AND month = 7 AND day = 28 AND street = "Humphrey Street";






 crime_scene_reports
    id INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    street TEXT,
    description TEXT,

people
    id INTEGER,
    name TEXT,
    phone_number TEXT,
    passport_number INTEGER,
    license_plate TEXT,

interviews
    id INTEGER,
    name TEXT,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    transcript TEXT,

atm_transactions
    id INTEGER,
    account_number INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    atm_location TEXT,
    transaction_type TEXT,
    amount INTEGER,

bank_accounts
    account_number INTEGER,
    person_id INTEGER,
    creation_year INTEGER,

airports
    id INTEGER,
    abbreviation TEXT,
    full_name TEXT,
    city TEXT,

flights
    id INTEGER,
    origin_airport_id INTEGER,
    destination_airport_id INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    hour INTEGER,
    minute INTEGER,

passengers
    flight_id INTEGER,
    passport_number INTEGER,
    seat TEXT,

phone_calls
    id INTEGER,
    caller TEXT,
    receiver TEXT,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    duration INTEGER,

bakery_security_logs
    id INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    hour INTEGER,
    minute INTEGER,
    activity TEXT,
    license_plate TEXT,
