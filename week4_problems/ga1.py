""" Calculate the standard deviation with respect to two significant decimals from the multiline
numerical value obtained from the user. If the user gives the value END then that is the end of the
data points. be the data points and be the average of data points. """
s,l = 0,[]
#take input
x = input()
while x != 'END': #evaluating for further inputs
    l.append(float(x))
    x = input()

if len(l) > 1:
    avg = sum(l)/len(l)
    for i in l:
        s += (i - avg)**2
    sd = (s/(len(l)-1))**0.5
    print(f'{sd:.2f}')
