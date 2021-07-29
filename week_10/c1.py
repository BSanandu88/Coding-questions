class Foo:
    def foo_fun(self):
        self.foo = 'foo'
class Bar(Foo):
    def __init__(self):
        super().foo_fun()
        self.bar = 'bar'
obj = Bar()
print(obj.bar)
obj.foo_fun()
print(obj.foo)
