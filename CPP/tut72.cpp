#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    // 6 8 9
    list<int> list1; // List of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    // list1.pop_front();
    // list1.remove(9);

    cout << endl;

    //sort the list
    // list1.sort();
    // list1.reverse();
    // display(list1);

    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";





    list<int> list2(3); // empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    //merge two list
    list1.merge(list2);
cout<<endl<<"list 1 after merging: "<<endl;
list1.sort();
list1.reverse();
display(list1);
    return 0;
}