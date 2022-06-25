-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT description, id
FROM crime_scene_reports
WHERE month = 7 AND day = 28
AND street = "Humphrey Street";


SELECT name, id FROM people
JOIN crime_scene_reports ON people.id = crime_scene_reports.id
AND crime_scene_reports.month = 7 AND crime_scene_reports.day = 28
AND crime_scene_reports.street = "Humphrey Street";