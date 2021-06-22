""" Write a program to accept a string from the user that contains ( and ) brackets. If the string
has properly matched parentheses, then print the maximum nesting depth. If the brackets are
not properly matched, print Not matched . """

#getting input and initialise max_depth=0 and match=false
s=input()
max_depth = 0
match = False

#match counting of open brackets and close brackets

if s.count("(") == s.count(")"):
    depth = 0
    for i in s:
        #check the depth
        if i == "(":
            depth += 1
            if depth > max_depth:
                max_depth = depth
        elif i == ")":
            depth = depth - 1
        #if depth == -1 means that brackets are closed 
        #assign match = false and break the loop
            if depth == -1:
                match = False
                break
        else:
            continue
else:
    match = False

if match == True:
    print(max_depth) 
else:
    print("Not matched!")