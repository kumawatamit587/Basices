# def average(a=9,b=3): #default argument
#     print("The average is ",(a+b)/2)

#default argument call
# average(4,5)
# average(7)

#keyword argument that does not matter order with key=value
# average(b=10,)



#Required arguments: In case we don’t pass the arguments with a key = value syntax, then it is necessary to pass the arguments in the correct positional order and the number of arguments passed should match with actual function definition.
# def average(a,b,c=4):
#     print("The average is ",(a+b+c)/3)

# average(5,6)



# Arbitrary Arguments:
# While creating a function, pass a * before the parameter name while defining the function. The function accesses the arguments by processing them in the form of tuple.
def average(*numbers):
    print(type(numbers))
    sum=0
    for i in numbers:
        sum=sum+i
    print("Average is: ",sum/len(numbers))    


average(5,8,9,5)



# def name(fname, mname = "Jhon", lname = "Whatson"):
#     print("Hello,", fname, mname, lname)

# name("Amy")

def name(**name):
    print(type(name))
    print("Hello,", name["fname"], name["mname"], name["lname"])

name(mname = "Buchanan", lname = "Barnes", fname = "James")