#include <iostream>
using namespace std;
template <class t1, class t2>
    t2 sum(t1 a, t2 b)
    {   
        t2 s;
        s = a + b;
        return s;
    }
int main()
{
    int a;
    float b;
    cout << "\nEnter  integer data : ";
    cin >> a;
    cout << "\nEnter  float data : ";
    cin >> b;
    cout<<"The sum is"<<sum (a,b);
    return 0;
}