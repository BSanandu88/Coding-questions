""" Refer to the lecture on birthday paradox. Birthdays are numbered from 1 to 365 (both endpoints
included). Given a list of birthdays of people in a room, find the number of pairs of people who
share a birthday. The input will be a single line of comma-separated integers. The output will be a
non-negative integer. """

bdays = []
for bday in input().split(','):
    bdays.append(int(bday))

count = 0
for i in range(len(bdays)):
    for j in range(i+1,len(bdays)):
        if bdays[i] == bdays[j]:
            count += 1
print(count)