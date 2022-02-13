#include <iostream>
using namespace std;
template <class t1, class t2>
    void sum(t1 a, t2 b)
    {   
        t2 s;
        s = a + b;
        cout<<"the sum is "<<s;
    }
int main()
{
    int a;
    float x;
    cout << "\nEnter  integer data : ";
    cin >> a;
    cout << "\nEnter  float data : ";
    cin >> x;
    sum (a,x);
    return 0;
}