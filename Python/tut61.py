class Employee:
    def __init__(self,name,id):
        self.name=name
        self.id=id
        
    def showData(self):
        print(f"The name of Employee: {self.id} is {self.name}")
            
class Programmer(Employee):
    def showLanguage(self):
        print("The default language is python")            
            
e1=Employee("Amit",100)
e1.showData()
e2=Programmer("Harry",101)
e2.showData()
e2.showLanguage()

# class Grandfather:
 
#     def __init__(self, grandfathername):
#         self.grandfathername = grandfathername
 
 
# class Father(Grandfather):
#     def __init__(self, fathername, grandfathername):
#         self.fathername = fathername
#         Grandfather.__init__(self, grandfathername)
# class Son(Father):
#     def __init__(self, sonname, fathername, grandfathername):
#         self.sonname = sonname
#         Father.__init__(self, fathername, grandfathername)
 
#     def print_name(self):
#         print('Grandfather name :', self.grandfathername)
#         print("Father name :", self.fathername)
#         print("Son name :", self.sonname)
# s1 = Son('Prince', 'Rampal', 'Lal mani')
# print(s1.grandfathername)
# s1.print_name()