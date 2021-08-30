""" PROBLEM 19
Name,Author,Genre,Pages
Igniting Minds,Kalam,Nonfiction,English,178
Wings of Fire,Kalam,Nonfiction,English,180
Harry Potter-1,Rowling,Fiction,English,309
Harry Potter-2,Rowling,Fiction,English,341
Harry Potter-3,Rowing,Fiction,English,435
Harry Potter-4,Rowling,Fiction,English,636
The Casual Vacancy,Rowling,Fiction,English,503
1984,Orwell,Fiction,English,328
Animal farm,Orwell,Fiction,English,112
Burmese days,Orwell,Fiction,English,300
Algorithms,Dasgupta,Nonfiction,English,320
A Brief History of Time,Hawking,Nonfiction,English,256
The Universe in a Nutshell,Hawking,Nonfiction,English,224
The Code Book,Simon,Nonfiction,English,416
Big Bang,Simon,Nonfiction,English,560
(1) Read this file in Python.
(2) Create an object of class Books that was introduced in the previous problem for each book
that you find in this file.
(3) Store all these objects in a list named library .
(4) Loop through the list of books in library and create the following sub-lists:
all books that belong to the fiction genre
all books that take less than 20 days to read
all books that are written by Rowling
For each of these questions, make maximum use of the methods in the class Books  """

books = []
f = open("library.csv","r")
lines = f.readline()[1:]
for line in lines:
    name,author,genre,subject,pages = lines.strip().split(",")
    b = Book(name,author,int(pages),genre)
    books.append(b)

fiction_books = []
for book in books:
    if book.is_fiction():
        fiction_books.append(book.name)
books_less_than_20_days = []
for book in books:
    if book.time_to_read() == "5 day":
        books_less_than_20_days.append(book.name)
rowling_books = []

for book in books:
    if book.author == 'Rowling':
        rowling_books.append(book.name)

print(fiction_books)
print(books_less_than_20_days)
print(rowling_books)
