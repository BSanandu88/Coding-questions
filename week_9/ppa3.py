""" Create a class StudentResult based on the following table's data where column name
represents the object's attribute in the class StudentResult . Email_id is an optional field
(default value = None) and other fields are mandatory for each student. In addition, create a class
variable Count that contains the total number of objects created and create the following
methods inside the class:
Average_marks : That returns the average marks of the student.
Total_marks : That returns total_marks out of 500 of the student.
Max_marks : That returns maximum marks of the student.
Min_marks : That returns minimum marks of the student. """

class StudentResult:
    Count = 0
    # Create constructor for class StudentResult
    def __init__(self,Roll_no,Student_name,Math,Physics,Chemistry,Computer,English,Email_id=None):
    # Assign parameters value to instance variable
        self.Roll_no=Roll_no
        self.Student_name=Student_name
        self.Email_id=Email_id
        self.Math=Math
        self.Physics=Physics
        self.Chemistry=Chemistry
        self.Computer=Computer
        self.English=English
        StudentResult.Count += 1

    #create total marks method
    def Total_marks(self):
         return(str((self.Math+self.Physics+self.Chemistry+self.Computer+self.English))+'/500')
    
    #create average class method
    def Average_marks(self):
        return(str((self.Math+self.Physics+self.Chemistry+self.Computer+self.English)/5))
    
    #create max marks method
    def Max_marks(self):
        return(max(self.Math,self.Physics,self.Chemistry,self.Computer,self.English))

# Create Max_marks method
    def Min_marks(self):
        return(min(self.Math,self.Physics,self.Chemistry,self.Computer,self.English))



#get input from user
a=input()
b=input()
c=int(input())
d=int(input())
e=int(input())
f=int(input())
g=int(input())
h=input()
# Create object for StudentResult
s1=StudentResult(a,b,c,d,e,f,g,h)
# Call method of object s1 and print return value
print(s1.Student_name,
s1.Total_marks(),s1.Average_marks(),s1.Max_marks(),s1.Min_marks())
# Call class variable count and print
print('Total Students =',StudentResult.Count)