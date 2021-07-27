""" PROBLEM-18
Create a class named Book . It should have the following attributes and methods:
Attributes
name
author
pages
genre
Methods
__init__(self, name, author pages, genre) : initialize the attributes with the argument
values
is_fiction(self) : returns True if the book is belongs to the fiction category, and False
otherwise
is_nonFiction(self) : returns True if the book belongs to the non-fiction category and
False otherwise
time_to_read(self) :
returns the string 5 day if the number of pages is less than 100
returns the string 20 days if the number of pages lies between 100 and 500
returns the string infinite if the number of pages exceeds 500
same_author(self, book) : returns True if book is written by the same author. book is an
argument of type Book .
Create at least three different objects of class Book . """

class Book:
    def __init__(self,name,author,pages,genre):
        self.name = name
        self.author = author
        self.pages = pages
        self.genre = genre
    def is_fiction(self):
        if self.genre == "Fiction":
            return True
        else:
            return False
    def is_nonfiction(self):
        if self.genre == "Nonfiction":
            return True
        else:
            return False
    def time_to_read(self):
        if self.pages < 100:
            return "5 day"
        if 100 <= self.pages <= 500:
            return "20 days"
        if self.pages > 500:
            return "infinite"
    def same_author(self,book):
        if self.author == book.author:
            return True
        else:
            return False


book1 = Book("Igniting Minds", "Kalam", 178, "Nonfiction")
book2 = Book("Wings of Fire", "Kalam", 180, "Nonfiction")
book3 = Book("Harry Potter-1", "Rowling", 309, "Fiction")
book4 = Book("Harry Potter-2", "Rowling", 341, "Fiction")
