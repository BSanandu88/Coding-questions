""" Consider the following sequence:
7,77,777,7777...
Let be the smallest element in this sequence that is divisible by . How many digits does 
have?

 """
seq = 7
while seq % 2003 != 0:
     seq = seq * 10 + 7
print(len(str(seq)))