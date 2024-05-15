# Snake, Water and Gun is a variation of the children's game "rock-paper-scissors" where players use hand gestures to represent a snake, water, or a gun. The gun beats the snake, the water beats the gun, and the snake beats the water. Write a python program to create a Snake Water Gun game in Python using if-else statements. Do not create any fancy GUI. Use proper functions to check for win.
import random
'''
               Computer
               S  W  G
              -1  0  1
               
       S -1    D  W  L
User   W  0    L  D  W
       G  1    W  L  D    
'''
# draw 0,won 1, lose -1
def checkstatus(comp,user):
    if(comp==user):
        return 0
    elif(user==-1 and comp==0):
        return 1
    elif(user==0 and comp==1):
        return 1
    elif(user==1 and comp==-1):
        return 1
    else:
        return -1
    
comp=random.randint(-1,1)
user=int(input("Enter number:"))# Snack=-1,Gun=1,Water=0
print("This Computer is",comp)
print("This User is",user) 

result=checkstatus(comp,user)

if(result==0):
    print("This is Draw.")
elif(result==-1):
    print("You lose the game")
elif(result==1):
    print("You won the game")
