def is_block(l):
    l.sort() #sorted in ascending order
    b = 0
    if (l[0][0],l[0][1] + 1) == l[1]:
        b +=1 
    if (l[0][0] + 1,l[0][1]) == l[2]:
        b += 1
    if (l[0][0] + 1,l[0][1] + 1) == l[3]:
        b += 1
    return b == 3


# is_block([(2, 1), (3, 1), (3, 2), (2, 2)])

import ast
def parse(inp):
    inp=ast.literal_eval(inp)
    return inp
fncall = input()
lparen = fncall.find("(")
rparen = fncall.find(")")
fname = fncall[:lparen]
farg = fncall[lparen+1:rparen]
if fname == "is_block":
    arg = parse(farg)
    print(is_block(arg))
else:
    print("Function",fname,"unknown")
