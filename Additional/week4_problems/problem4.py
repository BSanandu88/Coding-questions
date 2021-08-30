""" Problem-4
Accept two positive integer n and p as input. A string is formed by writing all the integers from 1
to n side by side on the same line. Find the number that is at the p th position in this sequence.
For example, if n = 15 , the sequence will look like this: 123456789101112131415 . The 
number in this sequence is 0. """
n = int(input())
p = int(input())
ans=""
for i in range(1,n+1):
    ans = ans + str(i)
print(ans)
print(ans[p-1])