#include <stdio.h>
int main()
{
    int i, j, m,n, c = 0, d = 0;
    printf("enter no. of rows and column->");
    scanf("%d", &m);
    scanf("%d", &n);
    int a[m][n], b[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter data for a[%d][%d]->", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is->\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                c++;
            }
        }
    }
    if (c > (m * n * 0.4))
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                b[j][i] = a[i][j];
            }
        }
        printf("Transpose matrix->\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
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