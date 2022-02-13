#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class simple
{
    double principle;
    double rate;
    double time;
    public:
void sI()
{   cout<<"\n";
    cin>>principle>>rate>>time;
    double interest;
    interest=(principle*rate*time)/100;
    cout<<"SI is" << interest << "\n";
}
void cI()
{
    double A=0.0;
     A = principle * (pow((1 + rate / 100), time));
      double CI = 0.0;
      CI=A- principle;
 
    cout<< "Compound interest is " <<CI;
}
};
int main()
{
    cout<<"Enter the data\n";
    simple a[1];
    a[1].sI();
    a[1].cI();
    return 0;
}