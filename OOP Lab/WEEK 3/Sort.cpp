#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"enter the total number of element in array";
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}