--SELECT COUNT(title) FROM movies WHERE id IN (SELECT movie_id FROM ratings WHERE rating = 10);



SELECT COUNT(movies.id) FROM movies JOIN ratings ON movies.id=ratings.movie_id AND ratings.rating=10;


--SELECT title FROM movies
--JOIN stars on movies.id = stars.movie_id
--JOIN people ON stars.person_id = people.id AND people.name = "Emma Stone";