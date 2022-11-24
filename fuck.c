#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	int n = 0,i,j,k,p=0,b=0;
	int a[10][10];
	scanf("%d", &n);
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;
	if (n > 2)
	{
		for (k = 2,b=3; k < n; k++,b++)
		{
			for (i = 0, j = 1; i < b - 2; i++, j++)
			{
				a[k][0] = 1;
				a[k][k] = 1;
				a[k][j] = a[k - 1][j - 1] + a[k - 1][j];
			}
		}
	}
	for (i = 0,j=0; i < n; i++,j++)
	{
		p = j;
		if (i > 0)
		{
			for (k = 0; p > 0; p--, k++)
				printf("%d ", a[i][k]);
			printf("%d\n", a[i][i]);
		}
		else
		{
			printf("%d\n", a[0][0]);
		}
	}
	return 0;
}