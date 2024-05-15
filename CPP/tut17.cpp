#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a * b;
}
float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}
//  int product(int a, int b)
// {static int c=0;
// c++;
//     return a * b+c;
// }
 
int main()
{
    // int a, b;
    // cout << "Enter the value of a and b ";
    // // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b)<<endl;
    // cout << "The product of a and b is " << product(a, b)<<endl;
    // cout << "The product of a and b is " << product(a, b)<<endl;
    // cout << "The product of a and b is " << product(a, b)<<endl;
    // cout << "The product of a and b is " << product(a, b)<<endl;
    int money=100000;
        cout<<"if you have "<<money<<" Rs is you account .you will recieve "<<moneyReceived(money)<<" Rs after 1 year."<<endl;
    cout<<"if you have "<<money<<" Rs is you account .you will recieve "<<moneyReceived(money,1.5)<<" Rs after 1 year.";
    return 0;
}