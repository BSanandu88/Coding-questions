""" Write a function that accepts a square matrix as input and returns True if it is an identity
matrix and False otherwise. An identity matrix has ones on the main diagonal and zeros
everywhere else. For example, the identity matrix looks like this: """

def is_identity(A):
    dim = len(A)
    for i in range(dim):
        for j in range(dim):
            #for diagonal elements
            if i == j and A[i][j] != 1:
                return False
            #this condition is for non-diagonal elements
            elif i != j and A[i][j] != 0:
                return False
    return True

######INPUT#######
A = []
dim = int(input())
for i in range(dim):
    A.append([])
    for num in input().split():
        A[-1].append(int(num))

print(is_identity(A))