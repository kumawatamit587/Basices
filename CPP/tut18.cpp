#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
//factorial(4)=4*factorial(3)
//factorial(4)=4*3*factorial(2)
//factorial(4)=4*3*2*factorial(1)
//factorial(4)=4*3*2*1
//factorial(4)=24
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main()
{
    //Factorial of a number:
    // 6 =6*5*4*3*2 == 720
    int a;
cout<<"Enter the number"<<endl;
cin>>a;
// cout<<"The factorial of"<< a<<" is "<<factorial(a);
cout<<"The fibonachi of "<< a<<" is "<<fib(a)<<endl;
    return 0;
}