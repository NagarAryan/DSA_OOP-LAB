#include<stdio.h>
struct detail
{
    char name[100],gender[100],des[100],dep[100];
    float bp;
};
void main()
{
    int n,i;
    float hr,da,gp;
    printf("enter no. of details to be entered--");
    scanf("%d",&n);
    struct detail a[n];
    for(i=0;i<n;i++)
    {
      printf("enter name- ");  
      scanf("%s",&a[i].name);
      printf("enter gender- "); 
      scanf("%s",&a[i].gender);
      printf("enter designation- "); 
      scanf("%s",&a[i].des);
      printf("enter department- "); 
      scanf("%s",&a[i].dep);
      printf("enter basic pay- "); 
      scanf("%f",&a[i].bp);
    }
    for(i=0;i<n;i++)
    {
        hr=a[i].bp*0.25;
        da=a[i].bp*0.75;
        gp=a[i].bp+hr+da;
        printf("the gross pay of %s -- %0.2f\n",a[i].name,gp);
    }
}