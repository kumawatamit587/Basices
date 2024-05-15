#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    float salary;
    int id;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class
/*class {{derived-class-name}}:{{visibility-mode}}{{base-class-name}}{
    class members/methods/etc..
}
Note
1. Default visibility mode is private.
2. Public visibility mode: public members of base class becomes public member of derived class
3. Private visibility mode: public members of base class becomes private member of derived class
4. Private member of base classare never inherited
*/

// Creating a Programmer class derived frofm Employee Base class
class Programmer :public Employee
{
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}