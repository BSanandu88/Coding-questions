class Country:
    def __init__(self) -> None:
        self.name = None
        self.capital = None
    def set_name(self,name):
        self.name = name
    def set_capital(self,capital):
        self.capital = capital
    def display(self):
        print(f"{self.capital} is the capital of {self.name}")
        
c1 = Country()
c2 = Country()
c3 = Country()
c1.set_name("India")
c1.set_capital("New Delhi")
c2.set_name("Australia")
c2.set_capital("Canberra")
c3.set_name("France")
c3.set_capital("Paris")
c1.display()
c2.display()
c3.display()