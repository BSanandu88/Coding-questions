import turtle

t = turtle.Turtle()
t.shape('turtle')
t.color('blue')
n=1
while n <= 10:
    t.circle(10*n,180,steps=100)
    n+=1