""" PROBLEM - 3
A bot starts at the origin and can make the following moves:
UP
DOWN
LEFT
RIGHT
Each move has a magnitude of 1 unit. You are given the sequence of moves made by the bot. The
first entry in the sequence is always START while the last entry in the sequence is always STOP. A
sample sequence is given below:
Find the distance of the bot from the origin. By distance we mean the Euclidean distance """

x,y = 0,0 #start at the origin
seq = input()
while seq!='STOP':
    if seq == 'UP':
        y += 1
    if seq == 'DOWN':
        y -= 1
    if seq == 'LEFT':
        x -= 1
    if seq == 'RIGHT':
        x += 1
    seq = input()
#pow is an inbuilt func
#pow(x,y) is equal to x**y
dist = pow(x ** 2 + y ** 2,0.5)
print(f'{dist : 0.2f}')