#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    void getdata(void)
    {
        cout << "\nEnter the 2 no.  \n";
        cin >> a >> b;
    }
};
class B : public A
{
public :
    void putdata(void)
    {
        cout << "\nThe entered no.s are:";
        cout << a <<"  "<< b;
    }

};
 int main()
{
    B obj;
    obj.getdata();
    obj.putdata();
}
