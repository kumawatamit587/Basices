#include <iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}
void func(int a)
{
    cout << "I am first func() " << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am templateized func() " << a << endl;
}
int main()
{
    // Harry<float> h(5.98);
    // Harry<char> h('D');
    // Harry<int> h(12);
    // cout << h.data << endl;
    // h.display();
    
    func(45.56);
    func(45); // Exact match takes the highest priority
    func('R');
    return 0;
}