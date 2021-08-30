""" Consider an n x n grid-world. 1 corresponds to land and 0 corresponds to water. An island is a
piece of land surrounded by water on all its sides. Given an arbitrary world, find the number of
islands in it. An instance of a world is given below. It has two islands: """

""" Accept the input as follows. The first line will contain a single integer , which gives the dimension
of the world. Each of the next lines, will be a comma-separated sequence of length which
corresponds to one row in the world. The above grid world will have the following input-output:
Input
Output
5
0,1,0,1,1
0,0,0,1,1
1,0,1,0,0
1,1,0,1,0
0,1,1,1,0
1
2
3
4
5
6
1 2 """

#medium difficulty
n = int(input())
world = []
for i in range(n):
    world.append([])
    for num in input().split(','):
        world[-1].append(int(num))

mod_world = []
for i in range(n+2):
    mod_world.append([])
    for j in range(n+2):
        if 1 <= i <= n and 1 <= j <= n:
            mod_world[-1].append(world[i-1][j-1])
        else:
            mod_world[-1].append(0)

count = 0
for i in range(1,n+1):
    for j in range(1,n+1):
        #potenial island
        if mod_world[i][j] == 1:
            #UP LEFT RIGHT DOWN
            if( mod_world[i-1][j]==
                mod_world[i][j-1] == 
                mod_world[i][j+1] == 
                mod_world[i+1][j]== 0):
                count += 1
print(count)