#include <iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1=breakfast;
    cout << (m1==2);
    // cout << lunch;
    // cout << dinner;
    // Structure is user define data type that entite define with defrent data type
    // struct employee amit;
    //struct employee kumar;
    // ep amit;
    //ep amitkumar;
    // amit.eId = 1;
    // amit.favChar = 'c';
    // amit.salary = 120000000;
    // cout << "The value is " << amit.eId << endl;
    // cout << "The value is " << amit.favChar << endl;
    // cout << "The value is " << amit.salary << endl;

    //     union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.car;
    return 0;
}