""" Write a program to obtain integers in multiple lines and print all pairs where the sum of any two
integers is present in the obtained input.
Note:
The output should be in non-descending order with respect to the first printed number in
the line.
Final line of input will be an empty line """

l = []
n = input()
while n:
    l.append(int(n))
    n = input()
l.sort() #sorting

#2 level sorting

for i in range(len(l)):
    for j in range(len(l)):
        if l[i] + l[j] in l and i != j:
            print(l[i],l[j])