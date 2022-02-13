#include <stdio.h>

void seg(int A[], int s)
{

    int l = 0, r = s - 1;
    while (l < r)
    {
        while (A[l] % 2 == 0 && l < r)
        {
            l++;
        }
        while (A[r] % 2 == 1 && l < r)
        {
            r--;
        }
        if (l < r)
        {
            
            int temp=A[l];
            A[l]=A[r];
            A[r]=temp;
            l++;
            r--;
        }
    }
}
int main()
{
    printf("Enter size of array -> ");
    int n;
    scanf("%d", &n);
    int A[n];
    printf("Enter elements in the array -> \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
   
    seg(A, n);
    printf("Array after segregation -> \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    return 0;
}