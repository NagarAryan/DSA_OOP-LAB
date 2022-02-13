#include<iostream>
using namespace std;

template <class T>

void Swap(T &a, T &b)
{

    T temporary;
    temporary = a;
    a = b;
    b = temporary;
}

int main()
{

    int a, b;
    cout << "Enter two numbers:\n";
    cin >> a>>b;
    Swap(a, b);
    cout << "\n\nAfter Swapping\n";
    cout << "\na value is:\n"<< a;
    cout << "\nb value is:\n" << b;
    return 0;
}