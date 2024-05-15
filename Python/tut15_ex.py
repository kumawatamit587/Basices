import time
t=time.strftime('%H:%M:%S')
print(t)

hours=time.strftime('%H')
print(hours)

# min=time.strftime('%M')
# print(min)

# sec=time.strftime('%S')
# print(sec)

if(int(hours)<12):
    print("Good Morning")
elif(int(hours)>=12 and int(hours)<17):
    print("Good Afternoon")
elif (int(hours)>=17 and int(hours)<20):
    print("Good evening")
else:
    print("Good night")