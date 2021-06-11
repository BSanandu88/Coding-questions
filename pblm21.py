""" Write a program to accept a comma-separated sequence of distinct non-negative integers in any
order and find the sum of n largest numbers in it. n is a positive integer and should also be
taken as input from the user.
If the user enters only one value, the output will be the same as the input. If only two values are
entered separated by commas, the output will be the sum of the two values. For more than 2
values entered, the program asks the user to enter the value of n . """

l = []
for num in input().split(','):
    l.append(int(num))

if len(l) == 1:
    print(l[0])
elif len(l) == 2:
    print(sum(l))
else:
    n = int(input())
    #assume n is less than or equal to len(l)
    answer=0
    while n > 0:
        max_sum = l[0]
        for i in range(len(l)):
            if l[i] > max_sum:
                max_sum = l[i]
        l.remove(max_sum)
        answer += max_sum
        n -= 1
    print(answer)