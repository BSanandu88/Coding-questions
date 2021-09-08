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



l = [1,2,3.4,5,10]
print(odd_one(l))