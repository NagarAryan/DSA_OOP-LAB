#include <iostream>  
using namespace std; 
void interest(int principle,float rate,int time)
{
    float Simple=(principle*rate*time)/100;
    cout<<"The Simple Interest is:"<<Simple<<endl;
}
int main()
{   int principal;
    float rate,time;
    cout<<"Enter the principal amount the rate and the time"<<endl;
    cin>>principal;cin>>rate;cin>>time;
    interest(principal,rate,time);
    return 0;
}