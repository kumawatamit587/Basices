#include <iostream>
#include <cmath>
using namespace std;
class Point{
    int x,y;
    friend void Pointobjects(Point,Point);
    public:
    Point(int a,int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The Point is ("<<x<<","<<y<<")"<<endl;
    }
};
//Create a function which takes 2 point objects and computes the distance between those points.
void Pointobjects(Point o1,Point o2){
    float result=sqrt(pow(o2.x-o1.x,2) + pow(o2.y-o1.y,2)*1.0);
    cout<<"The Distance is : "<<result<<endl;
}
int main()
{
    Point p(1,0);
    p.displayPoint();
    Point q(70,0);
    q.displayPoint();
    Pointobjects(p,q);
    return 0;
}