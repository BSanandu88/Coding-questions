import random

#visualise the matrix
def print_matrix(M):
    dim = len(M)
    for i in range(dim):
        for j in range(dim):
            if j != dim - 1:
                print(M[i][j],end=" ")
            else:
                print(M[i][j])

#A function to initialise a zero matrix
def zero_matirx(n):
    a = []
    for i in range(n):
        a.append([])
        for j in range(n):
            a[-1].append(0)
    return a

#simulate the tournament between the players
def init(A):
    dim = len(A)
    for i in range(dim):
        for j in range(i + 1,dim):
            A[i][j] = random.randint(0,1)
            if A[i][j] == 0:
                A[j][i] = 1
    return A

#returns one of the matrix
#there could be multiple winners
def winner(A):
    dim = len(A)
    max_wins,player = -1,-1
    for i in range(dim):
        win_count = 0
        for j in range(dim):
            win_count += A[i][j]
        if win_count > max_wins:
            max_wins = win_count
            player = i
    return player