from math import cos

x_prev,x_curr,count = 1000,0,0
while abs(x_prev - x_curr) > 0.00001:
    x_prev,x_curr = x_curr,cos(x_curr)
    count +=1 
print(f'Number of iterations needed = {count}')
print(f'Approximate value = {x_curr:0.4f}')