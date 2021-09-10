""" Twin primes are pairs of prime numbers that differ by 2. For example (3, 5), (5, 7), and (11,13) are twin primes.

Write a function Twin_Primes(n, m) where n and m are positive integers and n < m , that returns all unique twin primes between m and n (both inclusive). The function returns a list of tuples and each tuple (a,b) represents one unique twin prime where n <= a < b <= m. """

def primes(n,m):
    l = []
    for i in range(n,m+1):
        if(i == 1):
            continue
        flag = True
        for j in range(2,i//2+1):
            if(i % j == 0):
                flag = False
                break
        if(flag):
            l.append(i)
    return l

def twin_primes(n,m):
    l = primes(n,m)
    newlist = []
    for i in range(len(l)):
        for j in range(i+1,len(l)):
            if(j > i):
                diff = l[j] - l[i]
                if(diff == 2):
                    newlist.append(tuple((l[i],l[j])))
    return newlist

print(primes(10,15))
print(twin_primes(1,15))