#include<iostream>
using namespace std;
int largest(int a[],int n)
{
    int i;
    int m=a[0];
    for(i=1;i<n;i++)
    {
        if(m<a[i])
        {
            m=a[i];
        }
    }
    return m;
}
int main()
{
    int n,i;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q=largest(a,n);
    cout<<"the largest number is "<<q;
}