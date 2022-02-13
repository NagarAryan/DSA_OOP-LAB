#include<iostream>
using namespace std;
class Item
{
    public:
    int item;
    double price;

    void getData()
    {
        cout<<"Enter the item number ";
        cin>>item;
        cout<<"Enter the price ";
        cin>>price;
    }
    void display()
    {
        cout<<"The item no is : "<<item<<endl;
        cout<<"The price is : "<<price<<endl;
    }

};
int main()
{
    Item obj;
    Item *x=&obj;
    obj.getData();
    obj.display();
    x->display();
}