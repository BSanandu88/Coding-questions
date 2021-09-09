import math

def odd_one(l):
    ans = ""
    for i in range(len(l)):
        for j in range(i+1,len(l)):
            if(type(l[j]) == type(l[i])):
                continue
            else:
                if(type(l[j]) == int):
                    ans = "int"
                elif(type(l[j]) == str):
                    ans = "str"
                elif(type(l[j]) == bool):
                    ans = "bool"
                elif(type(l[j]) == float):
                    ans = "float"
                else:
                    pass
        break
    return ans

# another method
def odd_one(L):
    typeD = {'int' : [],'float':[],'str':[],'bool':[]}
    for i in L:
        if type(i) == int and len(typeD['int']) <= 1:
            typeD['int'] += [i]
        elif type(i) == float and len(typeD['float']) <= 1:
            typeD['float'] += [i]
        elif type(i) == str and len(typeD['str']) <= 1:
            typeD['str'] += [i]
        elif type(i) == bool and len(typeD['bool']) <= 1:
            typeD['bool'] += [i]
    for i,j in typeD.items():
        if len(j) == 1:
            return i
        

l = [1,2,False,5,10]
print(odd_one(l))