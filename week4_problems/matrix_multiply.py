r1 = [12,3,23]
r2 = [21,5,6]
r3 = [6,7,8]

s1 = [1,2,3]
s2 = [45,6,54]
s3 = [23,90,67]

a = []
a.append(r1)
a.append(r2)
a.append(r3)

b=[]
b.append(s1)
b.append(s2)
b.append(s3)

print(a)
print(b)

c=[[0,0,0],[0,0,0],[0,0,0]]
for i in range(3):
    for j in range(3):
        for k in range(3):
            c[i][j] = c[i][j] + a[i][k]*b[k][j]
            
print(c)