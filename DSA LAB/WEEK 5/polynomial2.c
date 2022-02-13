#include <stdio.h>
int max(int m, int n)
{
return (m > n) ? m : n;
}
void inp(int a, int n, int *arr)
{
for (int i = n; i >= a; i--)
{
int k = 0;
printf("Enter Co-Efficient of x^%d : ", i - a);
scanf("%d", &k);
arr[i] += k;
}
}
void out(int a, int n, int *arr)
{
printf("\nResulting polynomial after addition : ");
for (int i = n; i >= a; i--)
{
if (arr[i] < 0)
printf("%dx^%d ", arr[i], i - a);
else if (arr[i] > 0)
printf("+ %dx^%d ", arr[i], i - a);
}
printf("\n");
}
int main()
{
int a, b, c = 0;
int n, n2;
printf("\nEnter Highest Degree of First Polynomial : ");
scanf("%d", &n);
printf("Enter Highest Degree of Second Polynomial : ");
scanf("%d", &n2);
int arr[max(n, n2) + 1];
for (int i = 0; i <= max(n, n2); i++)
{
arr[i] = 0;
}
printf("\nEnter First Polynomial : \n");
inp(0, n, arr);
printf("\nEnter Second Polynomial : \n");
inp(0, n2, arr);
out(0, max(n, n2), arr);
return 0;
}