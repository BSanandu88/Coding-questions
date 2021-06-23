def power(x,n):
    '''return x raised to the power n'''
    global count
    count += 1
    print(f'Call number {count} : power ({x},{n})')
    if n == 0:
        return 1
    if n%2 == 0:
        root = power(x,n // 2)
        return root * root
    else:
        return x * power(x,n - 1)

count = 0
power(2,4)
print(count)