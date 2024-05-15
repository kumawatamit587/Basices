#include <iostream>
using namespace std;

// int funcAverage(int a,float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// int funcAverage(int a,long b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template<class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
template <class T1,class T2>
int funcAverage(T1 a,T2 b){
    float avg=(a+b)/2.0;
  
    return avg;
}

int main()
{
    float a;
    a=funcAverage(7,8);
    printf("The average of these numbers is %.3f", a);
      int x=5,y=7;
    swapp(x,y);
    cout<<endl;
    cout<<x<<endl<<y<<endl;
    return 0;
}