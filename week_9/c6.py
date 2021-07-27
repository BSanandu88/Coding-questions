""" PROBLEM 20
Consider the following class:
Create the following sub-classes that are derived from Shape . Each sub-class should override the
method get_area that returns the area of the shape. Add appropriate attributes for each of
these three classes. Assume that all polygons are regular (sides of equal length).
(1) Triangle :
(2) Square
(3) Circle """

class Shape:
    def __init__(self):
        self.name = None
        self.area = None
    def display(self):
        print(f'{self.name} has an area of {self.area}')
    def get_area(self):
        return self.area
    def is_larger(self, shape):
        return self.area > shape.area

class Triangle:
    def __init__(self,side) -> None:
        super().__init__()
        self.name = "Triangle"
        self.side = side
    def get_area(self):
        self.area = round((3 ** 0.5) * (self.side ** 2)/4,2)
        return self.area
class Square:
    def __init__(self, side):
        super().__init__()
        self.name = 'Square'
        self.side = side
    def get_area(self):
        self.area = round(self.side ** 2, 2)
        return self.area
class Circle:
    def __init__(self, side):
        super().__init__()
        self.name = "Circle"
        self.side = side
    def get_area(self):
        self.area = round(3.14 * (self.side ** 2), 2)
        return self.area