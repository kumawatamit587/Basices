#include <iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo<<"\n";
}
int main()
{
    int glo=9;
    glo=99;
    bool is_true=false;
    cout<<glo<<"\n";
        sum();
        cout<<is_true;
    // int a = 4;
    // int b = 5;
    // float pi = 3.14;
    // char c = 'd';
    // cout << "This is tut 4, \nHere the Value of a is " << a << ". \nThe Value of b is " << b;
    // cout << "\n The Value of pi is: " << pi;
    // cout << "\n The Value of C is: " << c;
    return 0;
}