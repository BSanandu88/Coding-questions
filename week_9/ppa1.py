"""  Create a Class Calculator that has the following methods:
Sum(a,b) that returns a + b
Multiply(a, b) that returns a * b
Subtraction(a, b) that returns a - b
Division(a, b) that returns a / b
Remainder(a, b) that returns a % b
Power(a, b) that returns a ** b
Quotient(a, b) that returns a // b """

class Calculator:
    def sum(self,a,b):
        return a+b
    def multiply(self,a,b):
        return a*b
    def subtraction(self,a,b):
        return a-b
    def division(self,a,b):
        return a/b
    def remainder(self,a,b):
        return a%b
    def power(slef,a,b):
        return a ** b
    def quotient(self,a,b):
        return a // b
#getting input from user
a = int(input())
b = int(input())
x = Calculator()
print(x.sum(a,b))
print(x.multiply(a, b))
print(x.subtraction(a, b))
print(x.division(a, b))
print(x.remainder(a, b))
print(x.power(a, b))
print(x.quotient(a, b))