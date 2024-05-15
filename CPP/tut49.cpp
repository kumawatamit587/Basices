#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list): initilization-section
{
      assignment+other
}
class Test {
    int a;
    int b;
    public:
    Test(int i,int j):a(i),(j) {constructor-body}
}
*/
class Test
{
        int a;
    int b;


public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(j+i)
    // Test(int i, int j) : a(i), b(j*2)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b) //--->RED Flag this will create problems because a will be initialized first
    Test(int i, int j)
    {
        a=i;
        b=j;
        cout << "COnstructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(1, 2);
    return 0;
}