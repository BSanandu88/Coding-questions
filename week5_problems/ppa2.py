#find the tranpose of a given matrix
def transpose(mat):
    trans = []
    #mat is dim of m x n
    m,n = len(mat),len(mat[0])
    for j in range(n):
        trans.append([])
        for i in range(m):
            trans[j].append(mat[i][j])
            #print(trans)
    return trans

#suffix code block
dims = input().split()
m,n = int(dims[0]),int(dims[1])
mat = []
for i in range(m):
    mat.append([])
    for num in input().split():
        mat[i].append(int(num))

#printing the matrix
trans = transpose(mat)
for i in range(n):
    for j  in range(m):
        if j != m - 1:
            print(trans[i][j],end=' ')
        else:
            print(trans[i][j])