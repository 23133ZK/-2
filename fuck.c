#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void ave(int a[], int b[],int x,int y)
{
	int i=0;
	double ave1 = 0, ave2 = 0, sum1 = 0, sum2 = 0;
	for (i = 0; i < x; i++)
		sum1 += a[i];
	for (i = 0; i < y; i++)
		sum2 += b[i];
	printf("%.2lf ", sum1 / x);
	printf("%.2lf\n", sum2 / y);
}
int main()
{
	int i = 0, n = 0, m = 0,a[100]={0},b[100]={0};
	while (scanf("%d%d", &n, &m) != EOF)
	{
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < m; i++)
			scanf("%d", &b[i]);
		ave(a, b, n, m);
	}
	return 0;
}