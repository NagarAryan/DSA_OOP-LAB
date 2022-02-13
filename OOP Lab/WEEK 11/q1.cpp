#include <iostream>
using namespace std;
class A
{
    int n;

public:
    void in()
    {
        cout << "Enter number- ";
        cin >> n;
    }
    void out()
    {
        cout << "After Overloading value of n is: " << n;
    }
    void operator-()
    {
        n = -n;
    }
};
int main()
{
    A obj;
    obj.in();
    -obj;
    obj.out();
    cout << endl;
    return 0;
}
