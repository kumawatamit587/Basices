#include <iostream>
using namespace std;
/*
Class Template with multiple PARAMETERS
template<class T1,class T2....(COMMA SEPARATER)>
class nameof Class{
    body
}
*/
template<class T1,class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myClass<char,float> obj('A',1.89);
    obj.display();
    return 0;
}