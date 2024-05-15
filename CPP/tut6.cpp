// System-header-files
#include <iostream>
// user Define
#include "this.h"
using namespace std;

int main()
{
    int a = 4, b = 5;
    // Arithmetic operators
    cout << "Type of operators in C++" << endl;
    cout << "Type of Arithmetic operators in C++" << endl
         << endl;
    cout << "The Value Of a+b is " << a + b << endl;
    cout << "The Value Of a-b is " << a - b << endl;
    cout << "The Value Of a*b is " << a * b << endl;
    cout << "The Value Of a/b is " << a / b << endl;
    cout << "The Value Of a%b is " << a % b << endl;
    cout << "The Value Of a++ is " << a++ << endl;
    cout << "The Value Of a-- is " << a-- << endl;
    cout << "The Value Of ++a is " << ++a << endl;
    cout << "The Value Of --a is " << --a << endl
         << endl
         << endl;

    // Assignment operators
    //  int a=3,b=9;
    // char d='d';

    // Comparison Operators
    cout << "Type of Comparison operators in C++" << endl
         << endl;
    cout << "The Value Of a==b is " << (a == b) << endl;
    cout << "The Value Of a!=b is " << (a != b) << endl;
    cout << "The Value Of a>=b is " << (a >= b) << endl;
    cout << "The Value Of a<=b is " << (a <= b) << endl;
    cout << "The Value Of a>b is " << (a > b) << endl;
    cout << "The Value Of a<b is " << (a < b) << endl;


    return 0;
}