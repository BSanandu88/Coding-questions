""" Accept electricity units as a positive integer from the user and write a program to print total bill
amount according to the following criteria: """

units = int(input())
bills = 0
#if units is greater than 500
if units > 500:
    bills += 5*100 + 300*8 + (units-500) * 10
#if units are 201 to 500
elif units > 200:
    bills += 5*100 + (units-200)*8
#if units are 101 to 200
elif units > 100:
    bills += 5*(units - 100)
else:
    pass
print(bills)