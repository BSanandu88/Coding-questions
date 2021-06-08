""" There are five boxes arranged from left to right. You keep adding a variable number of coins
sequentially in each box. Start from box-1 and keep going right. Once you reach the last box, head
back to box-1 and then keep adding coins. In any given turn, the number of coins added to a box
is always less than 10.
Find the box which has the maximum number of coins. If there are two boxes which have the
same maximum number of coins, output the smaller of the two box numbers. The sequence of
coins is represented by a string. For example, if the input is '3972894910' , this is how coins are
added: """
boxes = []
for i in range(5):
    boxes.append(0)

#add coins to boxes
coins = input()
#enumerate
for index,coin in enumerate(coins):
    #use mod operator to cycle back
    box_index = (index + 1) % 5 - 1
    boxes[box_index] += int(coin)
#find box with maximum coins
max_coins,max_box = boxes[0],0
for box_index,coins in enumerate(boxes):
    if coins > max_coins:
        max_coins = coins
        max_box = box_index
print(max_box + 1)