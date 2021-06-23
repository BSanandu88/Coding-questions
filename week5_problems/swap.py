#swapping a matrix

def print_matrix(M):
    dim = len(M)
    for i in range(dim):
        for j in range(dim):
            if j != dim - 1:
                print(M[i][j],end=' ')
            else:
                print(M[i][j])

#swap function
def swap(M,i,j,dim=0):
    #swap rows
    if dim == 0:
        M[i],M[j] = M[j],M[i]
    #swap columns
    else:
        for k in range(len(M)):
            M[k][i],M[k][j] = M[k][j],M[k][i]
    return M

M = [[1,2,3],
     [4,5,6],
     [7,8,9]]
swap(M,2,1,1)
print_matrix(M)