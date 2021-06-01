l = [12,34,2,13,44,1,323]
#write a code
x=[]


while(len(l) > 0):
    mini = l[0]
    for i in range(len(l)):
        if l[i] < mini:
            mini = l[i]
    x.append(mini)
    l.remove(mini)
print(l)
print(x)