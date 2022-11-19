#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,k=0,t=0,i=0,a=0,j;
	scanf("%d", &n);
	if (n % 2 != 0)
	{
		for (k = n / 2, i = 0,a=n-2; k; k--, i++,a-=2)
		{
			j = a;
			for (t = i; t; t--)
			{
				printf(" ");
			}
			printf("*");
			for (; j > 0; j--)
			{
				printf(" ");
			}
			
			printf("*\n");
		}
		for (a = n / 2; a; a--)
			printf(" ");
		printf("*\n");
		for (k = n / 2, i = n/2-1, a = 1; k; k--, i--, a += 2)
		{
			j = a;
			for (t = i; t; t--)
				printf(" ");
			printf("*");
			for (; j > 0&&j<n; j--)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	else
	{
		for (k = n,i=0; k; k -= 2,i++)
		{
			t = k;
			
			for (a = i; a; a--)
				printf(" ");
			printf("*");
			for (t=t- 2; t; t--)
				printf(" ");
			printf("*\n");
		}
		for (k = n, i = n/2-1,t=0; k; k -= 2, i--,t+=2)
		{
			
			j = t;
			for (a = i; a; a--)
				printf(" ");
			printf("*");
			while (j)
			{
				printf(" ");
				j--;
			}
			printf("*\n");
		}
	}
	return 0;
}