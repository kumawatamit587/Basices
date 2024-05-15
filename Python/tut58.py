class Person:
    # name="Harry"
    # occ="Developer"
    
    def __init__(self,name,occ):
        print("Hey I am person.")
        self.name=name
        self.occ=occ
        
    
    def info(self):
        print(f"{self.name} is a {self.occ}")
        
        
a=Person("Amit","Developer")
b=Person("Divya","HR")

a.info()
b.info()

# print(a.name)
# a.info()
# a.occ="HR"
# a.name="Divya"
# a.info()