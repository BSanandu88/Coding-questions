''' 
PROBLEM -- 17
Consider the file country-list.csv. It is a csv file that contains a list of countries and their capitals.
(1) First open this file and try to understand how the data is represented.
(2) Read this file in Python.
(3) Create an object of class Country that was introduced in the previous problem for each
country that you find in this file.
(4) Store all these objects in a list named countries .
(5) Loop through the list of countries. Break whenever you find South Africa . Change its capital
from "Pretoria" to "Cape Town". You must use the object's method to do this.
'''

class Country:
    def __init__(self):
        self.name = None
        self.capital = None
    def set_name(self, name):
        self.name = name
    def set_capital(self, capital):
        self.capital = capital
    def display(self):
        print(f"{self.capital} is the capital of {self.name}")

countries = []
f = open("country-list.csv","r")
lines = f.readlines()[1:]
for line in lines:
    name,capital = line.strip().split(",")
    c = Country()
    c.set_name(name)
    c.set_capital(capital)
    countries.append(c)

for country in countries:
    if country.name == 'South Africa':
        country.set_capital("Cape town")
        break