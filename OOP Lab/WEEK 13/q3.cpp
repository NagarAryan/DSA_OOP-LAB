#include <iostream>
using namespace std;

class A
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class"
             << " variable var_base: " << var_base << endl;
    }
};

class B : public A
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class"
             << " variable var_base: " << var_base << endl;
        cout << "Displaying Derived "
             << " class variable var_derived: "
             << var_derived << endl;
    }
};

int main()
{
    A *base_class_pointer;
    A obj_base;
    B obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 1;
    base_class_pointer->display();

    base_class_pointer->var_base = 2;
    base_class_pointer->display();

    B *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 3;
    derived_class_pointer->var_derived = 4;
    derived_class_pointer->display();
    return 0;
}
