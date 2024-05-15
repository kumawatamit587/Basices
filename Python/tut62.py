# class Employee:
#     def __init__(self):
#         # self.name="Harry" #This is public
#         self.__name="Harry" #this is private member so you can not access directly

# a=Employee()
# # print(a.name)
# # print(a.__name) #you can not access directly because __name is private
# print(a._Employee__name) # Now you can access indirectly by using Name mangling (_MyClass__mangled_attribute)

# # print(a.__dir__())



'''
Protected'''

class Student:
    def __init__(self):
        self._name = "Harry"

    def _funName(self):      # protected method
        return "CodeWithHarry"

class Subject(Student):       #inherited class
    pass

obj = Student()
obj1 = Subject()

# calling by object of Student class
print(obj._name)      
print(obj._funName())     
# calling by object of Subject class
print(obj1._name)    
print(obj1._funName())