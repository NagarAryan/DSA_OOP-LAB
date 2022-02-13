#include <iostream>
using namespace std;
class CN
{
    int real, img;

public:
    void in(CN &c1)
    {
        cout << "\nEnter real part of first complex number:";
        cin >> real;
        cout << "\nEnter imaginary part of first complex number:";
        cin >> img;
        cout << "\nEnter real  part of second complex number:";
        cin >> c1.real;
        cout << "\nEnter  imaginary part of second complex number:";
        cin >> c1.img;
    }

    void operator+(CN &c1)
    {
        int x, y;
        x = c1.real + real;
        y = c1.img + img;
        cout << "\n(" << c1.real << "+" << c1.img << "i)+(" << real << "+" << img << "i)=(" << x << "+" << y << "i)";
    }

    void operator/(CN &c1)
    {
        int x, y;
        x = c1.real / real - c1.img / img;
        y = c1.real / img + c1.img * real;
        cout << "\n(" << c1.real << "+" << c1.img << "i)*(" << real << "+" << img << "i)=(" << x << "+" << y << "i)";
    }
};
int main()
{
    CN A, B;
    A.in(B);
    A + B;
    A *B;
    return 0;
}