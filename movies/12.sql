SELECT title FROM movies
JOIN stars ON movies.id = stars.movie_id
JOIN people ON stars.person_id = people.id
AND people.name = "Johnny Depp" OR people.name = "Helena Bonham Carter";