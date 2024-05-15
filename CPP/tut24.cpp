#include <iostream>
using namespace std;
class Employee
{
    static int count; // now this classs property.
    // static int count=1000;//you can not change value from here for static varibles
    // count is satic data member in class Employee
    int id;

public:
    void setData(void)
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    };
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and employee number." << count << endl;
    }
    static void getCount()
    //static function accesss only static varible and function.
    {
        // cout<<id; //trough error because id is nonstatic
        cout << "The value of count " << count << endl;
    }
};
// class varible
int Employee::count; // default value Zero;
// int Employee::count=1000;//you can change static varible from here
// Without static count object take same count value because objec take every time count value zero;
// But static variable define once and by default value is zero.
int main()
{
    Employee harry, rohan, lavish;
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lavish.setData();
    lavish.getData();
    Employee::getCount();
    return 0;
}