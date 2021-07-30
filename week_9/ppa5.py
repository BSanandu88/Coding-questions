""" Write a python code to read a fixed width file fixedWidth.txt and print the average of each
column in the specified format.
The width of each column is stored in the variable n .
The file contains three columns of same width.
The first line of the file is the field name x, y and z.
The average of all x, y and z should be printed with space separated text with two decimal
places. """




f = open('fixedwidth.txt','r')
xsum,ysum,zsum = 0,0,0
count = 0
f.readline()
while True:
    line = f.readline()
    if line == '':
        break
    count+=1
    xsum += float(line[:7])
    ysum += float(line[7:14])
    zsum += float(line[14:])
print(f"{xsum/count:.2f} {ysum/count:.2f} {zsum/count:.2f}")
f.close()
