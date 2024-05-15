# print("decorators")
def greet(fx):
    def mfx(*args, **kwargs):
        print("good morning")
        fx(*args,**kwargs)
        print("Thanks using function")
    return mfx


@greet
def hello():
    print("Hello world")

@greet
def add(a,b):
    print(a+b)


hello()
# greet(hello)()
add(1,2)
# greet(add)(1,2)