#include <iostream>
using namespace std;
class A
{
protected:
    int length, breadth;

public:
    void getdata(void)
    {
        cout << "\nEnter the length and breadth \n";
        cin >> length >> breadth;
    }
};
class B : public A
{
public:
    void putdata(void)
    {
        cout << "area of rectangle is->" << breadth * length << endl;
    }
};
    int main()
    {
        B obj;
        obj.getdata();
        obj.putdata();
    }
