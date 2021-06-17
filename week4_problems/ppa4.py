""" Accept a non-empty list of space-separated positive integers as input from the user and print all
numbers in the list which are greater than the average in non-descending order. The output
format should be a sequence of space-separated integers.  """

n = input().split(" ")
l = []
total = 0
for i in n:
    l.append(int(i))
    total += int(i)

l.sort()
#cal the average
average = total/len(n)
#print each number 
for i in range(len(l)):
    if l[i] > average and i != len(l)-1:
        print(l[i],end=" ")
    elif l[i] >  average and i == len(l) - 1:
        print(l[i])

