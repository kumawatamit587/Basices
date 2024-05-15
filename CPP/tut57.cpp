#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title= s;
        rating = r;
    }
    virtual void display()
    {
        // cout<<"Bogus code";
    }
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Rating " << rating << " out of 5 stars." << endl;
        cout << "Length of this video is: " << videolength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
        void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Rating of text tutorial: " << rating << " out of 5 stars." << endl;
        cout << "No of words in this text tutorial is: " << words << " words." << endl;
    }
};
int main()
{
    string title;
    float rating,vlen;
    int words;

    //for Video
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CWHVideo djVideo(title,rating,vlen);
    // djVideo.display();


    //for text
        title="Django tutorial text";
    words=436;
    rating=4.23;
    CWHText djText(title,rating,words);
    // djText.display();




    CWH* tut[2];
    tut[0]=&djVideo;
    tut[1]=&djText;

    tut[0]->display();
    tut[1]->display();
    return 0;
}

/*Rules for virtual functions
1. they can't be static
2. they are accessed by object pointers.
3. virtual functions can be a friend of another class 
4. A virtual function in base class might not be used.
5. if a virtual function is defind in a base class, there is no necessity of redefining it in the derived class.
*/