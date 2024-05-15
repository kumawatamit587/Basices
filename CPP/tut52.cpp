#include <iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
    void setData(int a,float b ){
        id=a;
        price=b;
    }
    void getData(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of item is "<<price<<endl;
    }
};
int main()
{
    int size=3;
    // general_store item
    // veggies item
    // hardware item
    ShopItem *ptr=new ShopItem[size];//block of memory
    ShopItem *ptrTemp=ptr;
    int p,i;
    float q;
    for( i=0;i<size;i++){
        cout<<"Id and Price of item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
for( i=0;i<size;i++){
    cout<<"Item number: "<<i+1<<endl;
    ptrTemp->getData();
    ptrTemp++;
}
    return 0;
}