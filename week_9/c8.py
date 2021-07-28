#problem 3
class Vehicle:
    units = 0
    def __init__(self,name,wheels) -> None:
        Vehicle.units += 1
        self.name = name
        self.wheels = wheels
    def spec(self):
        print(self.name)
        print(self.wheels)
    def start():
        print("starting")
    def stop():
        print("stopping")

class Motor(Vehicle):
    speed = 0
    def __init__(self, name, wheels,fuel_type,capacity) -> None:
        super().__init__(name, wheels)
        self.fuel_type = fuel_type
        self.capacity = capacity
    def spec(self):
        super().spec()
        print(self.fuel_type)
        print(self.capacity)
    def raise_speed(self,num):
        self.speed = speed + num
    def slow_down_speed(self,num):
        self.speed = speed - num
    def apply_break(self):
        self.speed = 0
    def check_speed(self):
        print(self.speed)


class Car(Motor):
    def __init__(self, name="car", wheels=4, fuel_type='diesel', capacity=10,car_type='sedan') -> None:
        super().__init__(name, wheels, fuel_type, capacity)
        self.__car_type = car_type
    def spec(self):
        super().spec()
        print(self.__car_type)
    def raise_speed(self,num,times):
        self.speed = self.speed + num * times
    def slow_down_speed(self, num,times):
        self.speed = self.speed - num * times
    def apply_break(self):
        self.speed = self.speed//10
    def get_speed(self):
        super().check_speed()

