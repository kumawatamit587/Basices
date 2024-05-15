#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
//this is not swap
// int swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }


//Call by reference using pointers value
void swappointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// //Call by reference using varible
// void swapreferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
int & swapreferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 4, y = 5;
    // cout<<"the sum of a and b is "<<sum(4,5);
    cout << "the value of x is " << x << endl
         << "the value of y is " << y<<endl;
    // swap(a, b); //this will not swap a and b;
    // swappointer(&x,&y); //This will swap a and b using pointer reference
        swapreferenceVar(x,y)=466; //This will swap a and b using reference varible
    cout << "the value of x is " << x << endl
         << "the value of y is " << y;
    return 0;
}