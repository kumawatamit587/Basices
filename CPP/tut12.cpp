#include <iostream>
using namespace std;
int main()
{
    // what is point?--->data type whice holds the address of other

    int a = 3;
    int* b;
    b=&a;

    // &--->Address of operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // *--->(value at)Dereferance operator
cout << "The value of address of a is " << *b << endl;
//Pointer to pointer
int** c=&b;
cout << "The address of b is " << &b << endl;
cout << "The address of b is " << c << endl;
cout << "The value of address of b is " << *c << endl;
cout << "The value of address of b is " << **c << endl;
    return 0;
}