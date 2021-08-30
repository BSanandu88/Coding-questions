""" You are given a movie dataset in the form of a dictionary. The key of dictionary is the movie name
and the value is a list. First element of this list is the box office collection in millions and the
second element is the year of release. 
 """


def add_movie_to_boxoffice(movies_db,new_movie):
    name,collection,year = new_movie
    movies_db[name] = [collection,year]
    return movies_db

def highest_grossing_movie_year(movies_db):
    movies_data_list = list(movies_db.values())
    top_collection = 0
    top_movie_year = 0
    for movie in movies_db:
        collection = movies_db.get(movie)[0]
        year = movies_db.get(movie)[1]
        if collection > top_collection:
            top_collection = collection
            top_movie_year = year
    return top_movie_year

def total_collection(movies_db):
    total_budget = 0
    for movie in movies_db:
        total_budget = total_budget + movies_db[movie][0]
    return total_budget

def average_collection(movies_db):
    total_collection = 0
    for movie in movies_db:
        total_collection = total_collection + movies_db[movie][0]
    average_collection = total_collection/len(movies_db)
    return round(average_collection,2)

def num_of_movies_above_average(movies_db):
    abov_avg_movie_count = 0
    for movie in movies_db:
        collection = movies_db[movie][0]
        if collection > average_collection(movies_db):
            abov_avg_movie_count += 1
    return abov_avg_movie_count