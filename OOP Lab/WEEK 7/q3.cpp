#include <iostream>
using namespace std;
class Father
{
public:
    char name[100];
    int age;
    void getdata(void)
    {
        cout << "Enter the name";
        cin >> name;
        cout << "Enter age";
        cin >> age;
    }
};
class Son : public Father
{
public:
    char names[100];
    int ages;
    void data(void)
    {
        cout << "Enter the name\n";
        cin >> names;
        cout << "Enter age\n";
        cin >> ages;
    }
    void check(void)
    {
        if (ages > age)
        {
            cout << "err";
        }
        else
        {
            cout << "The Father details are:\n";
            cout << name << age;
            cout << "The Son details are:\n";
            cout << names << ages;
        }
    }
};
int main()
{
    Son x;
    x.getdata();
    x.data();
    x.check();
    return 0;
}
