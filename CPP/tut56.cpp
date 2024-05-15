#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base=10;
    virtual void display()
    {
        cout << "Displaying base class varible var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived=20;
    void display()
    {
        cout << "Displaying base class varible var_base " << var_base << endl;
        cout << "Displaying base class varible var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class

base_class_pointer->display();
    return 0;
}