#include <stdio.h>
int main()
{
    int i, j, r,c, co = 0, d = 0;
    printf("enter no. of rows->");
    scanf("%d", &r);
    printf("enter no. of  column->");
    scanf("%d", &c);
    int a[r][c], b[c][r];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter data for a[%d][%d]->", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix is->\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                co++;
            }
        }
    }
    if (co > (r * c * 0.4))
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                b[j][i] = a[i][j];
            }
        }
        printf("transpose matrix->\n");
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < r; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Input Matrix is not a Sparse Matrix\n");
    }
    return 0;
}