#include <iostream>
using namespace std;
class Over
{
    int n;

public:
    void in()
    {
        cout << "Number - ";
        cin >> n;
    }
    void out()
    {
        cout << "value of N is: " << n;
    }
    void friend operator-(Over &a);
};
void operator-(Over &a)
{
    a.n = -a.n;
}
int main()
{
    Over obj;
    obj.in();
    -obj;
    obj.out();
    cout << endl;
    return 0;
}