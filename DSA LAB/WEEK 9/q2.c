#include <stdio.h>

int main()
{

    printf("Enter the elements of the array : \n");
    int arr[10], i, j, a;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; ++i)
    {

        for (j = i + 1; j < 10; ++j)
        {

            if (arr[i] > arr[j])
            {

                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
            printf("The entered elements of the array are : \n");
            for (int i = 0; i < 10; i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\nEnter the element to be searched : ");
            int s, f = 0;
            scanf("%d", &s);
            int u = 10 - 1, l = 0;
            while (u >= 1)
            {
                int m = l + (u - 1) / 2;

                if (arr[m] == s)
                {
                    printf("Element %d was found at array index : %d \n", s, m);
                    f = 1;
                    break;
                }
                else if (arr[m] > s)
                {
                    u = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            if (f == 0)
            {
                printf("Element %d was not found in given array \n", s);
            }
            return 0;
        }