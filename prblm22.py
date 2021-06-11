""" Accept a square matrix as input and find the sum of all the elements in it. The input will have
 n + 1 lines. The first line will be a positive integer . Each of the next lines will be a list of
comma-separated integers.
Test cases:
3
1,2,3
4,5,6
7,8,9
1
2
3
4
1 45
2
1,0
0,-1
1
2
3
1 0
 """
#matrix
n = int(input())
m = []
for i in range(n):
    m.append([])
    for num in input().split(','):
        m[i].append(int(num))
msum = 0
for i in range(n):
    for j in range(n):
        msum += m[i][j]
print(msum)
