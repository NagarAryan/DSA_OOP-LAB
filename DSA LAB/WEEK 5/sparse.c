#include <stdio.h>
int main()
{
 int m[100][100];
 int r, c, z = 0;
 printf("Enter the order of the matix \n");
 scanf("%d %d", &r, &c);
 printf("Enter the elements of the matix \n");
 for (int i = 0; i < r; ++i)
 {
 for (int j = 0; j < c; ++j)
 {
 scanf("%d", &m[i][j]);
 if (m[i][j] == 0)
 {
 z++;
 }
 }
 }
 if (z > ((r * c) / 2))
 {
 printf("The given matrix is Sparse Matrix !!! \n");
 }
 else
 printf("The given matrix is not a Sparse Matrix \n");
 return 0;
}