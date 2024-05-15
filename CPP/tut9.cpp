#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Your age" << endl;
    cin >> age;

    // //Selection control structure with if-else
    // if (age < 18)
    // {
    //     cout << "You can not come my party";
    // }
    // else if (age == 18)
    // {
    //     cout << "You can come my party with child pass";
    // }
    // else
    // {
    //     cout << "You can come to the party";
    // }

    //Selection control structure: Switch case statements
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;

        case 22:
        /* code */
        cout<<"You are 22"<<endl;
        break;    
        case 2:
        /* code */
        cout<<"You are 2"<<endl;
        break;
    default:
        /* code */
        cout<<"Nothing to Print"<<endl;
        break;
    }
    cout<<"You complete with all cases";
    return 0;
}