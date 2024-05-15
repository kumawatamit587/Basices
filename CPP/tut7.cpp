#include <iostream>
using namespace std;
int c = 90;
int main()
{
    // int a, b, c;
    // cout << "Enter the vlaue of a: " << endl;
    // cin >> a;
    // cout << "Enter the vlaue of b: " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "Sum the vlaue of c: " << c << endl;
    // // With Scope resolutor oparator
    // cout << "The Global vlaue of c: " << ::c;

    // float d = 34.9F;
    // long double e = 34.9L;
//**********************Float,double and long double Literals***************
    // cout << "The Size of 34.4 is " << sizeof(34.9) << endl;
    // cout << "The Size of 34.4f is " << sizeof(34.9f) << endl;
    // cout << "The Size of 34.4F is " << sizeof(34.9F) << endl;
    // cout << "The Size of 34.4l is " << sizeof(34.9l) << endl;
    // cout << "The Size of 34.4L is " << sizeof(34.9L) << endl;

//***********Reference Variable**************
// float x=455;
// float & y=x;
// cout<<x<<endl;
// cout<<y;

//******************Type Casting********
int a=455;
float b=566.98;
cout<<"The Value of a "<<(float)a<<endl;
cout<<"The Value of b "<<(int)b<<endl;
cout<<"The Value of a "<<float(a)<<endl;
    return 0;
}