""" A clockwise rotation of a list consists of taking the last element and moving it to the beginning of
the list. For instance, if we rotate the list [1,2,3,4,5], we get [5,1,2,3,4]. If we rotate it again, we get
[4,5,1,2,3].
Write a program to accept a non-empty sequence of numbers separated by space and a positive
integer k and print the list elements in same line separated by space after k rotations. """

#getting input after split from blank space assign to seq
seq = input().split(' ')
l = []
#append each element of seq1 after converting str to int
for i in seq:
    l.append(int(i))
n = len(l)
k = int(input()) % n
#copy all elements from list 1 to list rt
rt = l[0:]
#assign number from 1 at correct place in rt after k rotation
for i in range(0,n):
    rt[i] = l[i - k]
#print all the elements of list rt
for i in range(n-1):
    print(rt[i],end=" ")
print(rt[n-1])
