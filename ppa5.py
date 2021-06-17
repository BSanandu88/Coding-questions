""" Write a program to accept a non-empty sequence of numbers separated by comma. Print this
sequence in the same line separated by comma after removing all duplicate values while
preserving the original order. For example:
Input
Output
Answer
Test Cases
Public
Input 1
Output 1
Input 2
1 6,5,9,2,6,9,5
1 6,5,9,2 """

#getting input and after split from blank space assign to it
l1 = input().split(",")
l2 = []
l3 = []
for i in l1:
    l2.append(int(i))
for i in l2:
    if i not in l3:
        l3.append(i)
#print the elements of l3
for i in l3[:-1]:
    print(i,end=",")
print(l3[-1])