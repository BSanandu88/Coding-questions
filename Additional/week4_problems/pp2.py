""" Write a program to accept a string from the user that contains ( , ) , { , } and [ , ] in it. Print
True if all the brackets are opened and closed properly. Otherwise print False .
Note:
{}[]() are the opening and closing brackets which needs to be verified - All the opening
brackets should be closed with the same type of closing bracket. """

s = input()
o = '({['
c = ')}]'
b = ''
match = True #boolean variable for validation
for i in s:
    if i in o:
        b = b+i
    if i in c:
        if o[c.index(i)] in b and o[c.index(i)] == b[-1]:
            b = b[:-1]
        else:
            match = False

            break

if len(b) != 0:
    match = False
print(match)


    
