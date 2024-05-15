#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration
    void printNumber()
    {
        cout << "Your Number Is " << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(int x, int y) //--->This is parameterized constructor as it takes no parameters 
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex c(4, 6);
    c.printNumber();

    // Explicit call
    Complex res = Complex(5, 7);
    res.printNumber();
    return 0;
}