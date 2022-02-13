#include <iostream>
using namespace std;

class name
    {
    public:
    string name1, name2;
    string fullname;
    name()
    {
        name1 = "Aryan ";
        name2 = "Nagar";
    }
    void merge()
    {
        fullname = name1 + name2;
        cout<<"Full Name : "<<fullname;        
    }
    };

int main(void)
{
    name ob = *new name();
    ob.merge();
}