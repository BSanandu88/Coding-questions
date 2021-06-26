def fact(n):
    global count
    count += 1
    if (n==0):
        return 1
    else:
        return n * fact(n-1)

count = 0
print(fact(10))
print(count)