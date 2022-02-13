#include <stdio.h>

struct Distance {
    int km;
    float m;
};
void sum(struct Distance a,struct Distance b)
{
    float skm,sm,s;
    skm=a.km+b.km;
    sm=a.m+b.m;
    s=skm+(sm*0.001);
    printf("sum of distance in km %f \n",s);
}
void main()
{
    struct Distance d1,d2;
    printf("Enter First Distance\n");
    scanf("%d",&d1.km);
    printf("Enter Meter");
    scanf("%f",&d1.m);

    printf("Enter second distance\n");
    scanf("%d",&d2.km);
    printf("Enter Meter\n");
    scanf("%f",&d2.m);

   sum(d1,d2);

    
   
}