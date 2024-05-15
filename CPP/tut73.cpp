#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> markmap;
    markmap["Harry"] = 98;
    markmap["Jack"] = 87;
    markmap["Rohan"] = 89;
    markmap.insert({{"amit", 54}, {"abhi", 67}});
    map<string, int>::iterator iter;
    for (iter = markmap.begin(); iter != markmap.end(); iter++)
    {
        /* code */
        cout << (*iter).first << ":" << (*iter).second << " \n";
    }
    cout << "The size is: " << markmap.size() << endl;
    cout << "The max size is: " << markmap.max_size() << endl;
    cout << "The empty's return value is: " << markmap.empty() << endl;
        markmap.clear();
            for (iter = markmap.begin(); iter != markmap.end(); iter++)
    {
        /* code */
        cout << (*iter).first << ":" << (*iter).second << " \n";
    }
    return 0;
}