#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 24, 25, 27};
    // int mathmarks[4];
    // mathmarks[0]=12344;
    // mathmarks[1]=435435;
    // mathmarks[2]=98765;
    // mathmarks[3]=5678;
    //     cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout<<"The Value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
    // int i=0;
    // while (i<4)
    // {
    //     /* code */
    //     cout<<"The Value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    //     int i=0;

    // do{
    //         /* code */
    //         cout<<"The Value of marks "<<i<<" is "<<marks[i]<<endl;
    //         i++;
    //     }while (i<4);

    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout << "The Value of *p is " << *p<<endl;
    // cout << "The Value of *(p+1) is " << *(p+1)<<endl;
    // cout << "The Value of *(p+2) is " << *(p+2)<<endl;
    // cout << "The Value of *(p+3) is " << *(p+3)<<endl;

    return 0;
}