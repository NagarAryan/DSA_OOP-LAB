#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in container array");
    scanf("%d", &n);
    int container[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the Elements of container array ");
        scanf("%d", &container[i]);
    }
    printf("Enter the hunter integer");
    int hunter;
    scanf("%d", &hunter);
    int flag = 0;
    int c = 0;
    while (flag == 0)
    {
        for (i = 0; i < n; i++)
        {
            if (container[i] == hunter)
            {
                c++;
                flag == 0;
                hunter = hunter * 3;
                continue;
            }
            c = 0;
        }
        if (c > 0)
        {
            flag = 1;
        }
    }
    printf("The Final value of Hunter is %d", hunter);
}