#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

void move(int a[], int n)
{
	int* p1 = a, * p2 = a + n - 1;
	int tem = 0, i = 0;
	for (i = 0; i < n / 2; i++,p1++,p2--)
	{
		tem = *p1;
		*p1 = *p2;
		*p2 = tem;
	}
}
int main()
{
	int n = 0,i=0,j=0,k=0;
	int a[100] = { 0 };
	int* p = a;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	move(a, n);
	for (i = 0; i < n-1; i++)
		printf("%d ", a[i]);
	printf("%d", a[i]);
	return 0;
}
