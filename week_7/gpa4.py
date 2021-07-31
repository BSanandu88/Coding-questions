""" Suppose you have an matrix, where represents number of rows and and represents
number of columns and , that consists of integer values. Write a program that
creates a new matrix in which all the elements are replaced by zeros except the border
elements.
Input Format
The first line contains a positive integer m to represent the number of rows.
The second line contains a positive integer n represent to number of columns.
Accept m rows in which each row contain n elements separated by space.
Evaluation Format
Print the matrix elements row wise and separated by space after replacing all elements by zeros
except the border elements. """

def create_matrix(r,c):
    l1 = []
    i = 0
    while i < r:
        l2 = input().split(' ')
        l1.append(l2)
        i += 1
    return l1

def replaceByZero(l,r,c):
    for i in range(r):
        for j in range(c):
            if i != 0 and j != 0 and i != r-1 and j != c-1:
                l[i][j] = 0

m = int(input())
n = int(input())
l = create_matrix(m,n)
replaceByZero(l,m,n)
for i in range(m):
    for j in range(n):
        if j != n-1:
            print(l[i][j],end=' ')
        else:
            print(l[i][j])