#multiplication of 2 matrices

dims = input().split(',')
m,n = int(dims[0]),int(dims[1])

a = []
for i in range(m):
    a.append([])
    for num in input().split(','):
        a[-1].append(int(num))

dims = input().split(',')
p,q = int(dims[0]),int(dims[1])

b = []
for i in range(p):
    b.append([])
    for num in input().split(','):
        b[-1].append(int(num))

if n != p:
    print('Impossible!')
else:
    c = []
    for i in range(m):
        c.append([])
        for j in range(q):
            c[-1].append(0)
            for k in range(n):
                c[i][j] += a[i][k] * b[k][j]
            if j != q - 1:
                print(c[i][j],end= ',')
            else:
                print(c[i][j])

