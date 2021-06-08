""" Simulating Nim
Simulate the following game. There are marbles in a pile to begin with. Two players take turns
to play the game. Each player can remove at most four marbles from the pile, but has to remove
at least one marble. The player who removes the last marble is the loser.
One of the players will be the computer. The other player will be a human. For every turn, you
must accept an input from the user which will be the number of marbles that the user has to
remove from the pile. If the user makes a wrong move — more than four marbles or less than
one marble — flash a warning message and keep accepting input until a valid input is received.
For simulating the computer's moves, use the random library. This game has a winning strategy
for the person who makes the first move. Can you figure it out?
 """
import random
 #assumptions
 # 1-> computer starts first
 #n >  4
 # user always enters an integer

 #no of marbles
n = int(input('Enter the number of marbles you wish to play with : '))
print('--------')
print(f'Game | {n} marbles')
print('============')
##### Start #####
turn = 'computer'
while n > 0:
    if turn=='human':
         human = int(input('Your turn: '))
         if not(1 <= human <= 4) or (n < human):
             print('Invalid move')
             continue
         #successful move
         n -= human
         turn = 'computer'
         print(f'#### Marbles remaining : {n}')
    elif turn == 'computer':
        computer=random.randint(1,4)
        if n < computer:
            continue
        n -= computer
        turn = 'human'
        print(f'Computer\'s choice : {computer}')
        print(f'##### Marbles remaining : {n}')
          