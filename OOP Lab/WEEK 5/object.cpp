#include <iostream>
using namespace std;
class objectCount
{
private:
    static int count;

public:
    objectCount()
    {
        count++;
    }

   static void display()
    {
        cout << "The number of objects created = " << count;
    }
};
int objectCount::count = 0;
int main(void)
{
    objectCount x;
    objectCount y;
    objectCount z;
    z.display();
}