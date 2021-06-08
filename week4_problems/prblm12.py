x = 1
while( x**2 + x + 41) % 41 != 0:
    x +=1 
print(x)
'''
for checking the correctness of answer
assert statement may be used
assert false will throw an assertion error
'''
assert(x**2+x+41) % 41 == 0