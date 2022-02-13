#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void getdata1()
    {
        cout << "enter first no.-";
        cin >> a;
    }
};
class B
{
public:
    int b;
    void getdata2()
    {
        cout << "enter second no.-";
        cin >> b;
    }
};
class gcd : public B, public A
{
public:
    void gcdNo()
    {

        while (a != b)
        {
            if (a > b)
            {
                a -= b;
            }
            else
            {
                b -= a;
            }
        }

        cout << "gcd is->" << a << endl;
    }
};
int main()
{
    gcd obj;
    obj.getdata1();
    obj.getdata2();
    obj.gcdNo();
    return 0;
}
