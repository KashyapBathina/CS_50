-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT id
FROM crime_scene_reports
WHERE month = 7 AND day = 28
AND street = "Humphrey Street";


SELECT name FROM people
JOIN crime_scene_reports ON people.id = crime_scene_reports.id
WHERE month = 7 AND day = 28 AND street = "Humphrey Street" AND id = 295;