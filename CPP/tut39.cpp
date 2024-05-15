#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
/* For protected member:
                            public derivation    private derivation    protected derivation
                            
1. private members           Not inherited         Not Inherited         Not inherited
2. protected members            Protected              Private              protected
3. public members                Public                Private              protected
*/
class Derived :protected Base
{

};
int main()
{
    Base b;
    Derived d;
   // cout<<d.a;// Will not work since a is protected in both base as well as derived class
    return 0;
}