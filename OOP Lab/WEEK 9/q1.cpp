#include <iostream>
#include <cmath>
using namespace std;


class complex
{
    public:
    int real, img;
  
    complex(int t1, int t2)
    {
        real = t1;
        img = t2;
    }

    complex compare(complex X)
    {
        double z1, z2;
        complex ob1(0,0);
        ob1.real = real;
        ob1.img = img;
        z1 = sqrt(real*real + img*img);
        z2 = sqrt(X.real*X.real + X.img*X.img);
        if(z1>z2)
            return ob1;
        else    
            return X;
    }
};

int main(void)
{
    complex ob1(5, 3);
    complex ob2(10, 4);
    complex result(0,0);
    result = ob1.compare(ob2);
    cout<<"The greater complex number is : "<<result.real<<" + i"<<result.img;
}

