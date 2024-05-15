# i=int(input("Enter The Number: "))
# print(i)
# while(i<=38):
#     i=int(input("Enter the number: "))
#     print(i)
# print("Done with loop")    
    
# count=5
# while(count>0):
#     print(count)
#     count=count-1
# else:
#     print("counter is 0.")   
    
# while(i<4):
#     print(i)
#     i=i+1

'''The most common technique to emulate a do-while loop in Python is to use an infinite 
 while loop with a break statement wrapped in an if statement that checks a given condition and breaks 
 the iteration if that condition becomes true:'''
 
while True:
     number=int(input("Enter a positive number: "))
     print(number)
     if not number>0:
         break