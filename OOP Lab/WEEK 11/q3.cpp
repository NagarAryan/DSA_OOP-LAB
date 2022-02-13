#include <iostream>
using namespace std;

class Over
{
        int a, b;

public:
        void accept()
        {
                cout << "\n Enter Two Numbers : \n";
                cout << " ";
                cin >> a;
                cout << " ";
                cin >> b;
        }
        void operator--()
        {
                a--;
                b--;
        }
        void operator++()
        {
                a++;
                b++;
        }
        void display()
        {
                cout << "\n A : " << a;
                cout << "\n B : " << b;
        }
};
int main()
{
        Over obj;
        obj.accept();
        --obj;
        cout << "\n After Decrementing : ";
        obj.display();
        ++obj;
        ++obj;
        cout << "\n\n After Incrementing : ";
        obj.display();
        return 0;
}