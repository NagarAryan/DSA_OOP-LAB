#include <iostream>
using namespace std;

template<class T>
void sum(T a,T b)
{
    cout<<"\nSum="<<a+b<<endl;
}

int main()
{   int a,b;
    cout<<"\nEnter two integer data: ";
    cin>>a>>b;
    sum(a,b);
    return 0;
}