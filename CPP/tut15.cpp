#include <iostream>
using namespace std;

//function prototype
//type function name(argument)
// int sum(int a,int b); //----->Acceptable
// int sum(int a, b); //----->not Acceptable
int sum(int,int); //----->Acceptable
// void g(void);
void g();
int main()
{
    int num1, num2;
    cout << "Enter Num1" << endl;
    cin >> num1;
    cout << "Enter Num2" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2)<<endl;
g();
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void g(){
    cout<<"Hello";
}