""" problem 2
An Internet Protocol address (IP address) is a numerical label assigned to each device
connected to a computer network that uses the Internet Protocol for communication.
Write a program to read all IP address(binary format) before termination line END from
ipaddress.txt file and after converting into decimal format , print the output in following
format. """

# a function that convert 8bit binary to decimal
def convert(p):
    q = 0
    for i in range(len(p)-1,-1,-1):
        q += (int(p[i]) * (2**(7-i)))
    return str(q)

#a func that return the class name for x decimal value
def ipclass(x):
    y = convert(x)
    if (int(y) <= 127):
        return 'A'
    elif (int(y) <= 191):
        return 'B'
    elif (int(y) <= 223):
        return 'C'
    elif (int(y) <= 239):
        return 'D'
    else:
        return 'E'
#open file in read mode
f = open('ipaddress.txt','r')
IPBook = {'A':0,'B':0,'C':0,'D':0,'E':0}
IP = f.readline().rstrip('\n')
while(IP != 'END'):
    cl = ipclass(IP[0:8])
    IPBook[cl] = IPBook[cl] + 1
    IP = f.readline().rstrip('\n')
f.close()
for i,j in IPBook.items():
    print(i,'=',j)
