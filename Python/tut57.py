class Person:
    name="Amit"
    occupation="Software Developer"
    networth=10
    def info(self):
     print(f"{self.name} is a {self.occupation}")
    
    
a=Person()
b=Person()
a.name="Shubham"
a.occupation="Accountant"
b.name="Abhishek"
b.occupation="HR"

# print(a.name)
# print(a.occupation)

a.info()
b.info()