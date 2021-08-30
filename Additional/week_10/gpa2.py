""" Write a class named Point having object attributes x and y taken as parameters respectively.
(Use code from the previous question)
x and y should be zero if no parameter is passed.
Write a method for Point class named move that takes two arguments dx and dy as input
and increments the x and y attributes by dx and dy respectively.
Write a method for the Point class named value that returns a tuple of x and y . It should
not print anything.
Write a method for the Point class named duplicate that returns a new Point object
having the same x and y . It should not print anything.
Write a class named Line having object attributes startPoint and endPoint taken as
parameters respectively.
startPoint and endPoint are objects of Point class.
Write a method for Line class named length to return the length of the line formed by the
points startPoint and endPoint .
Write a method for Line class named slope to return the slope of the line formed by the
points startPoint and endPoint . Return math.inf if the slope is infinite.
Note: Obtaining input and printing is not required. """

import math
class Point:
    def __init__(self, x=0, y=0): # constructor for class with default arguments
        self.x = x # assigning the value of x to object attribute x
        self.y = y # assigning the value of y to object attribute y
    def move(self, dx, dy): # method with two parameters
        self.x += dx # incrementing the value of x by dx
        self.y += dy # incrementing the value of y by dy
    def value(self): # method with no parameter
        return (self.x, self.y) # return the tuple with the value of x and y
    def duplicate(self):
        return Point(self.x, self.y)

class Line:
    def __init__(self,startPoint,endPoint):
        self.startPoint = startPoint
        self.endPoint = endPoint
    def length(self):
        x1,y1 = self.startPoint.value()
        x2,y2 = self.endPoint.value()
        return ((x2-x1)**2+(y2-y1)**2)**0.5
        
        
    def slope(self):
        x1,y1 = self.startPoint.value()
        x2,y2 = self.endPoint.value()   
        if x1 != x2:
            return (y2 - y1)/(x2 - x1)
        else:
            return (math.inf)

pt1 = Point()
pt2 = Point(3,3)
pt1.move(1,1)
pt2.move(1,2)
print(f'Point 1: {pt1.value()}')
print(f'Point 2: {pt2.value()}')
l1 = Line(pt1, pt2)
print(f'Line length: {l1.length():.2f}')
print(f'Line slope: {l1.slope():.2f}')
