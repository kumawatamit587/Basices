#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void Show()
    {
        cout << "The Value of Base1 is " << base1int << endl;
        cout << "The Value of Base2 is " << base2int << endl;
        cout << "The Value of Base1 is " << base3int << endl;

        cout << "The Sum of these values are " << base1int + base2int + base3int << endl;
    }
};
/*
Syntex for inheritance in multiple inheritance:---
claas Derived:visibility-mode base1,visibility-mode base2,visibility-mode base3, visibility-mode baseN.....
{
    class body of class Derived
}
*/

int main()
{
    Derived amit;
    amit.set_base1int(23);
    amit.set_base2int(5);
    amit.set_base3int(15);
    amit.Show();
    return 0;
}