#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void move(int a[], int n, int m)
{
	int i, b[100];
	for (i = 0; i < n; i++)
	{
		b[i] = a[(n - m + i) % n];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}
int main()
{
	int i,m,k, n, q,a[100]={'\0'};
	scanf("%d%d", &n, &q);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (q; q; q--)
	{
		scanf("%d", &m);
		
		move(a, n, m);

	}
	
	return 0;
}
