#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream Aout("sample60.txt");
    cout<<"Enter your name"<<endl;
    string name;
    cin>>name;
    Aout<<name+" here is my name here ";
    Aout.close();

    ifstream Ain("sample60.txt");
    string contant;
    Ain >> contant;
    // while(getline(Ain,contant)){
    //         cout<<"The contant of this file is: "<<contant<<endl;
    // }
    cout << "The contant of this file is: " << contant << endl;
    Ain.close();
    return 0;
}