#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elment\n");
        scanf("%d",&a[i]);
    }
    for (i = 0; i <n; i++) 
    {     
        for (j = i+1; j <n; j++) 
        {     
           if(a[i] > a[j]) 
           {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;   
            }
        }
    }
    printf("\nThe second largest number is:%d\n",a[n-2]);
    printf("\nThe second smallest number is:%d\n",a[1]);
    return 0;
}
