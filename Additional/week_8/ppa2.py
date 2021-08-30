""" Write a Python program for a ticket reservation system. The operational details are given below.
Available tickets are 100
Booking time starts at 10:00 and closes at 17:00 ends inclusive.
Any booking that falls outside the booking time should be rejected.
One person can book tickets for multiple persons, hence that reservation should be
completely reserved or completely rejected.
Assume that multiple bookings do not happen at the same time.
HH:MM S 10 C 25 W 20 O 5 is an example line from the input.
'S' , 'C' , 'W' and 'O' are the identifiers that denote Senior citizen, Child, Woman
and Others respectively.
The line always starts with HH:MM which are the time in 24 hours.
S 10 denotes the 10 tickets of Senior citizens, similarly for other identifiers.
The ticket type and number can be in any order, where the number is always followed
by the identifier. The same example is valid and is equivalent to HH:MM C 25 S 10 O 5
W 20 .
Update the dictionary log accordingly. Refer the suffix part of the code.
You don't need to print anything.
The last line of input will be an empty line. """

#important question
availableTickets = 100
log = {}
for i in ['S','C','W','O']:
    log[i] = 0
line = ''
line = input().strip()
while line:
    line = input().strip() #read input
    if availableTickets > 0:
        t = line[:5]
        if '10:00' <= t <= '17:00':
            tk = line[5:].strip().split()
            d={}
            for i in range(0,len(tk),2):
                d[tk[i].strip()] = int(tk[i+1])
            tkCount = 0 #var for storing total tickets
            for k in d:
                tkCount += d[k]
            if tkCount <= availableTickets:
                availableTickets -= tkCount
                for k in d:
                    log[k] += d[k]
sold = 0
for i in log:
    sold += log[i]
print(f'Tickets sold: {sold}')
print(f'Tickets remaining: {100-sold}')
print(f'Senior citizens: {log["S"]}')
print(f'Children: {log["C"]}')
print(f'Women: {log["W"]}')
print(f'Other: {log["O"]}')
