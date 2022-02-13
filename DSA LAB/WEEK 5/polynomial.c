#include <stdio.h>
void inp(int n1, int n, int *arr)
{
for (int i = n; i >= n1; i--)
{
printf("Enter Co-Efficient of x^%d : ", i - n1);
scanf("%d", &arr[i]);
}
}
void out(int n1, int n, int *arr)
{
printf("Polynomial : ");
for (int i = n; i >= n1; i--)
{
if (arr[i] < 0)
printf("%d x^%d ", arr[i], i - n1);
else if (arr[i] > 0)
if (i == n)
printf("%d x^%d ", arr[i], i - n1);
else
printf("+ %d x^%d ", arr[i], i - n1);
}
}
int main()
{
int n1, n2, c = 0;
int n;
printf("Enter Highest Degree of Polynomial : ");
scanf("%d", &n);
int arr[n + 1];
inp(0, n, arr);
out(0, n, arr);
return 0;
}