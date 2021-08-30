""" Write a program to obtain a matrix from the user and rotate it in the anti-clockwise direction by
90 degrees. """

#creating a nested list from the input
m = []
row = input()
while row:
    t=[]
    for i in row.strip().split(" "):
        t.append(i)
    m.append(t)
    row = input()

#nested list for rotated matrix
m_ = []
for i in range(len(m[0])):
    m_.append([])
    for j in range(len(m)):
        m_[i].append(0)
print(m_)  #debug

#transpose
for i in range(len(m)):
    for j in range(len(m[0])):
        m_[j][i] = m[i][j]
print(m_)  #debug

#flipping the row of the transposed matrix
m_ = m_[::-1]
#print the rotated matrix
for i in range(len(m_)):
    for j in range(len(m_[0])):
        if j != len(m_[0])-1:
            print(m_[i][j],end=' ')
        else:
            print(m_[i][j],end=' ')
    print()