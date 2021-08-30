""" Write a function that accepts a square matrix and a positive integer as input and returns A^n """

#moderate level question
def zero_matrix(dim):
    z = []
    for i in range(dim):
        z.append([])
        for j in range(dim):
            z[-1].append(0)
    return z

#basic idea : A^n = A^(n - 1) * A
#a simple recursive solution

def power(A,n):
    #base case
    if n == 1:
        return A
    p_one_less = power(A,n-1)
    dim = len(A)
    #create a zero matrix to store the product
    p = zero_matrix(dim)
    for i in range(dim):
        for j in range(dim):
            for k in range(dim):
                p[i][j] += p_one_less[i][k] * A[k][j]
    return p

#input part
dim = int(input())
a = []
for i in range(dim):
    a.append([])
    for num in input().split():
        a[-1].append(int(num))
n = int(input())
print(power(a,n))