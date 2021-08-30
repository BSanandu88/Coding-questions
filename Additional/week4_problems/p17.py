""" Given a list of integers, find the number of times an integer appears in the list. The input will
have two lines.
First line will be a comma-separated sequence of integers.
Second line will be an integer .
The output should be a non-negative integer.
 """
l=[]
for num in input().split(','):
    l.append(int(num))
x = int(input())
count = 0
for y in l:
    if y==x:
        count +=1 
print(count)