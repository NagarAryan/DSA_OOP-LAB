#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element");
        scanf("%d",&a[i]);
    }
    printf("Enter the Element to be searched in the array");
    int x;
    scanf("%d",&x);
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag == 1;
            break;
        }
    }
    if(flag==0)
    {
    printf("The element was not found");
    }
    else
    {
    printf("The Element was found at %d index",i);
    }
}