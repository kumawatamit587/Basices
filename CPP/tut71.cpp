#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector."<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    // Ways to create a vector
    vector<int> vec1;    // zero length vector
    //  int element;
    // int size = 5;
        // cout << "Enter size of vector:" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add this vector:" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }

    // vec1.pop_back();

    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter+1, 566);
    //     vec1.insert(iter+1,5, 566);
    // display(vec1);


    vector<char> vec2(4); // 4-element character vector
    //  vec2.push_back('5');
    // display(vec2);


    vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);


    vector<int> vec4(4,13);
       display(vec4);
       cout<<vec4.size()<<endl;

    return 0;
}