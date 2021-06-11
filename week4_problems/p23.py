""" The trace of a square matrix is the sum of elements on the main diagonal (from the upper left to
the lower right). Accept a square matrix as input and compute its trace. The input will have n + 1
lines. The first line will be a positive integer . Each of the next lines will be a list of commaseparated intege """
mat = []
n = int(input())

for i in range(n):
    mat.append([])
    for num in input().split(','):
        mat[i].append(int(num))

diag_sum = 0
for i in range(n):
    #for j in range(n):
    diag_sum += mat[i][i]
print(diag_sum)