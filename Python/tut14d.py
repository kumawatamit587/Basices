#nested if if-else
num=0
if(num<0):
    print("Number is negative.")
elif (num>0):
    if(num<=10):
        print("number is Positive")
    elif(num>10 and num<=20):
        print("number is between 11-20")
    else:
        print("number is greater than 20")
else:
    print("Number is zero")
    