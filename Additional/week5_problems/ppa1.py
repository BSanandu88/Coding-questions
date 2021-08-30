#solving the situation of linear equations

def solve(eq1,eq2):
    a1,b1,c1 = eq1
    a2,b2,c2 = eq2   #sequence unpacking
    #we have unpacked the list eq1 into the three coeficients

    x = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1)
    y = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1)
    return int(x),int(y)

#input suffix code block
eq1 = [int(word) for word in input().split()]
eq2 = [int(word) for word in input().split()]
x,y = solve(eq1,eq2)
print(x,y)
