#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a=34;
    // cout<<"The Value of a was"<<a<<endl;
    // a=45;
    // cout<<"The Value of a is"<<a;

    //Constants in C++
    // const int a=3;
    // cout<<"The Value of a was "<<a<<endl;
    // a=45; //You can not change value of a because a is constant
    // cout<<"The Value of a is "<<a;


//Manipulatiors in C++
// int a=3,b=78,c=1234;
// cout<<"The Value of a without setW is "<<a<<endl;
// cout<<"The Value of b without setW is "<<b<<endl;
// cout<<"The Value of c without setW is "<<c<<endl;

// cout<<"The Value of a "<<setw(4)<<a<<endl;
// cout<<"The Value of b "<<setw(4)<<b<<endl;
// cout<<"The Value of c "<<setw(4)<<c<<endl;

//Operator Precedence
int a=3,b=4;
int c=((((a*5)+b)-45)+87);
cout<<c;
    return 0;
}