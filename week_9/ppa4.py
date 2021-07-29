""" Write a function commaLineToList to convert a string to list with the condition given below,
The strings should be split to a list by comma ,
'a,b,c,d,,e' -> ['a', 'b', 'c', 'd', '', 'e']
If a comma inside the double quote should be exempted.
'a,"b, c",d,,e' -> ['a', 'b, c', 'd', '', 'e']
Convert the integer, integer separated by commas and integer followed by $ and ends with
M be converted to millions in integer datatype.
'a,"b, c",d,,e,"12,345","$1,123.32M"' -> ['a', 'b, c', 'd', '', 'e', 12345,
1123320000]
Convert the decimal values to float dataset.
Convert all double quote within a double should be replaced with single double quote. """

def commaLineToList(s):
    l,a = [],0
    flag = True
    for i in range(len(s)):
        if s[i] =='"':
            flag = not flag
        if s[i] == ',' and flag:
            l.append(s[a:i])
            a = i+1
        else:
            l.append(s[a:i+1])
    for j in range(len(l)):
        if ',' in l[j]:
            l[j] = l[j][1:-1]
        if j == 5:
            l[j] = float(l[j])
        if j == 8:
            while ',' in l[j]:
                l[j] = l[j].replace(',','')
            l[j] = int(l[j])
        if j == 9 and len(l[j]) > 1:
            l[j] = int(float(l[j][1:-1])*10**6)
        if type(l[j]) == type(' '):
            l[j] = l[j].strip()
        if l[j].strip().isdigit():
            l[j] = int(l[j].strip())
    while '""' in l[7]:
        l[7] = l[7].replace('""'.'\"')
        return l

import ast
def parse(inp):
    inp = ast.literal_eval(inp)
    return inp
fncall = input()
lparen = fncall.find("(")
rparen = fncall.rfind(")")
fname = fncall[:lparen]
farg = fncall[lparen+1:rparen]
if fname == "commaLineToList":
    print(commaLineToList(farg[1:-1]))
else:
    print("Function", fname, "unknown")