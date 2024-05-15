#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
    //Order of execution of constructor --> first A() then B()
}

Case2:
class A: class B,class C{
    -->B() then C() and A()
}

Case3:
class A: public B,virtual public C{
    -->C() then B() and A()
}
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called " << endl;
    }
    void printDataBase1(void)
    {
        cout << "The Value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "The Value of data1 is " << data2 << endl;
    }
};

//Execution order depend on this
class Derived : public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called"<<endl;
    }
    void printDataDerived1(void)
    {
        cout << "The Value of derived1 is " << derived1 << endl;
        cout << "The Value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived Der(1, 2, 3, 4);
    Der.printDataBase1();
    Der.printDataBase2();
    Der.printDataDerived1();
    return 0;
}