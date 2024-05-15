#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a constructor
    //  Constructot is a special member function with same name as of the class.
    // it is used to initializ the objects of its class
    //  It is automatically invoked when ever object is created.
    Complex(void); // constructor declaration
    void printnumber()
    {
        cout << "The Number is " << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(void)
//this is default constructor  and it's not take any parameters
{
    a = 10;
    b = 20;
    // cout<<a<<b;
}
int main()
{
    Complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}

/*Properties of constructor
1. It should be declared in the public section of the class
2. The automatically invoked whenever the object is created
3. they cannot return values and Do not have return type
4. It can have default arguments
5. We cannot refer to their address
6. 
*/