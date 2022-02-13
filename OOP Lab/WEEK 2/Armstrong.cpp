#include <iostream>  
using namespace std;  
int main()  
{  
int n,a,sum=0,temp;    
cout<<"Enter the three digit number";    
cin>>n;    
temp=n;    
while(n>0)    
{    
a=n%10;    
sum=sum+(a*a*a);    
n=n/10;    
}    
if(temp==sum)    
cout<<"The number entered is a Armstrong Number."<<endl;    
else    
cout<<"The number entered  is not a Armstrong Number."<<endl;   
return 0;  
}  