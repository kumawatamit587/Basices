# #fibonachi
# f(0)=0
# f(1)=1
# f(2)=f(1)+f(0)
# f(n)= f(n-1) + f(n-2)
# def fibonachi(n,num1=0,num2=1):
#     i=0
#     while(n>i):
#         print(num1,num2)
#         sum=num1+num2
#         num1=num2
#         num2=sum
#         i=i+1


def fibonachi(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return fibonachi(n-2)+fibonachi(n-1)
        

num=int(input("Enter the number :"))
for i in range(num):
    print(fibonachi(i),end=",")      
    
    
# 0 1 2 3 4 5 for num=6
# n=5
# fib(n-2)+fib(n-1)
# fib(5-2)+fib(5-1)
# fib(3-2)+fib(3-1)+fib(4-2)+fib(4-1)
# 1+fib(2-2)+fib(2-1)+fib(2-2)+fib(2-1)+fib(3-2)+fib(3-1)
# 1+0+1+0+1+1+fib(2-2)+fib(2-1)
# 1+0+1+0+1+1+0+1
