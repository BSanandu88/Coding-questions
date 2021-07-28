""" Create a class StudentResult based on the following table's data where column name
represents the object's attribute in the class StudentResult . Email_id is an optional field
(default value = None) and other fields are mandatory for each student:
Marks are out of 100 """

class StudentResult:
    #create constructor 
    def __init__(self,Roll_no,Student_name,Math,Physics,Chemistry,Computer,English,Email_id=None):
        #assign parameters value to instance variable
        self.Roll_no = Roll_no
        self.Student_name = Student_name
        self.Math = Math
        self.Physics = Physics
        self.Chemistry = Chemistry
        self.Computer = Computer
        self.English = English
        self.Email_id = Email_id
    def display(self):
        print(s1.Roll_no,s1.Student_name,s1.Math,s1.Physics,s1.Chemistry,s1.Computer,s1.English,s1.Email_id)

a = input()
b = input()
c = input()
d = input()
e = input()
f = input()
g = input()
h = input()
# Create object for class StudentResult
s1=StudentResult(a,b,c,d,e,f,g,h)
s1.display()