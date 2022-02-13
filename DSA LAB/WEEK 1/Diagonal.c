#include<stdio.h>
#include<stdlib.h>
void nonzero(int **b,int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]!=0)
             {
              c++;
             }
        }
    }
    printf("\nno. of nonzero elements-%d",c);
}
void suml(int **b,int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
             {
              c=c+b[i][j];
            
             }
        }
    }
    printf("\nsum of elements above -%d",c);
}
void sumd(int **b,int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>(n-1))
             {
              c=c+b[i][j];
            
             }
        }
    }
    printf("\nsum of elements below -%d",c);
}
void sumdd(int **b,int n)
{
    int i,j,l=1,m=1,p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i=j)
            {
                l=l*b[i][j];
            }
            if((i+j)==(n-1))
             {
              m=m*b[i][j];
            
             }
        }
    }
    p=l*m;
    if(n%2==1)
    {
        p=p/b[n/2][n/2];
    }
    printf("\nproduct of diognal elements  -%d",p);
}
int main()
{
    int **a,n,i,j,t;
       printf("enter size of DD array- ");
      scanf("%d",&n);
      a=(int **)malloc(n*sizeof(int *));
      for(i=0;i<n;i++)
      {
          a[i]=(int *)malloc(n*sizeof(int));
      }
     
      printf("\nEnter Numbers \n");
      
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
           
        }   
      }
      printf("\narray is-\n");
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
            printf("%d ", a[i][j]);
           
        } 
        printf("\n");  
      }
    nonzero(a, n);
    suml(a,n);
    sumd(a,n);
    sumdd(a,n);
    return 0;
}