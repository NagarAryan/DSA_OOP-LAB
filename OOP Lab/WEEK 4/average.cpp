#include<iostream>
using namespace std;
class stud 
{
double roll;
char name[100];
int marks;
public:
void in()
{
     
     cout<<"enter roll-  ";
     cin>> roll;
     cout<<"enter name- ";
     cin>>name;
     cout<<"enter marks-  ";
     cin>>marks;
      
}
void out()
{
   
      
     cout<<"enter roll - "<<roll<<endl;
     
     cout<<"enter roll - "<<name<<endl;
     
     cout<<"enter marks - "<<marks<<endl;
}
};
int main()
{
    stud a[2];
    for(int i=0;i<2;i++)
    {
        cout<<"             student"<<i+1<<endl; 
    a[i].in();

    }
    for(int i=0;i<2;i++)
    {
        cout<<"             student"<<i+1<<endl; 
    a[i].out();

    }
    
    return 0;
}