""" Accept a sequence of space-separated integers as input. Print ascending if the sequence is in
ascending order. Print descending if the sequence is in descending order. Print unsorted if the
sequence is not in any order. You can assume that all numbers in the sequence are distinct. """

l=[]
for num in input().split(' '):
    l.append(int(num))

#assumption given in the question is all
#elements are distinct

ascending,descending = True,True

for i in range(1,len(l)):
    if l[i] > l[i-1]:
        descending = False
    elif l[i] < l[i-1]:
         ascending = False

if ascending:
    print('Ascending')
elif descending:
    print('Descending')
else:
    print('unsorted')
