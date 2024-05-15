
// OOPs - Classes and Objects
    // C++ ---> initially called --> C with classes
    // class --> extension of structure (in C)
    //   > member are public
    //   > No methods
    //  classes --> strutures + more
    //  Classes  --> can have methods and properties(attribute)
    //  Classes --> can make few members as private and few as publice
    //  strutures in C++ are typedefed
    // you can declare objects along with the class declarion like this:
    //  class Employee{
    //      class definition
    //  }harry,rohan,lovish,amit;

    // Nesting of member functions
#include <iostream>
#include <string>
using namespace std;
class binary
{
    //by default class member private
    private:   
    string s;
        void chk_bin(void);

public:
    void read(void);
    // void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter binery number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
                // if (s[i] != '0' && s[i] != '1') //you can access string charactars like this.
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Icorrect binary format" << endl;
            exit(0); //Use for Successfully termenate if program exicute successfully
            //exit(1); termenate program if we get an error
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }else
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
};
void binary:: display(void){
    cout<<"Display Binary Number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
cout<<endl;
};
int main()
{
    
    binary b;

    b.read();
    // b.chk_bin(); //if it is private then you can not access this;
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}