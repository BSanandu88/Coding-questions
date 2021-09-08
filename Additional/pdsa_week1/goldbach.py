import math
def primeList(n):
    l = []
    for i in range(2,n+1):
        l.append(i)
    i = 2
    while(i <= int(math.sqrt(n))):
        if i in l:
            for j in range(i * 2,n+1,i):
                if j in l:
                    l.remove(j)
        i += 1
    return l


def Goldbach(n):
    l = primeList(n)
    newlist = []
    for i in range(len(l)):
        for j in range(i,len(l)):
            if(l[i] + l[j] == n or (l[i] + l[j] == n and l[i] == l[j])):
                newlist.append(tuple((l[i],l[j])))
    return newlist

n = 26
print(primeList(n))
print(Goldbach(n))