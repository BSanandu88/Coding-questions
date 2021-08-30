""" Two vectors are parallel to each other if one can be expressed as a scalar multiple of the other.
For example,[1,2,3] and [4,8,12] are parallel because 4.[1,2,3] The expression 4.[1,2,3]
 stands for the vector obtained by multiplying each element of by . In general,
two vectors and are parallel, if we there is a non-zero scalar such that:
                      v = c.u
Accept two vectors as input from the user and determine if they are parallel to each other

input: 1 2 3 4         -->
       5 10 15 20      -->  parallel """

v1 = []
for num in input().split(' '):
    v1.append(float(num))

v2 = []
for num in input().split(' '):
    v2.append(float(num))

result = 'parallel'
#two vectors of unequal length can't be parallel
if len(v1) != len(v2):
    print('not parallel')
else:
    c = 0
    length = len(v1)
    for i in range(length):
        if v1[i] != 0:
            c = v2[i]/v1[i]
            break
    #check parallelism
    for i in range(length):
        if v2[i] != c * v1[i]:
            result = 'Not parallel'
            break
print(result)