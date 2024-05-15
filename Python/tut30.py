# factorial(7) = 7*6*5*4*3*2*1
# factorial(6) = 6*5*4*3*2*1
# factorial(5) = 5*4*3*2*1
# factorial(4) = 4*3*2*1
# factorial(0) = 1


# factorial(n) = n * factorial(n-1)

# Recursion in python
# Recursion is the process of defining something in terms of itself.



def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*factorial(n-1)

n=int(input("Enter the number : "))
facValue=factorial(n)
print("Factorial of",n,"is",facValue)

