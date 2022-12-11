#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

void fun1(int n,int m)
{
	int i = 0;
	int g[100]={0};
	char name[100][10];
	for (i = 0; i < n; i++)
		scanf("%d %s", &g[i], name[i]);
	void fun2(int x[], char y[][10], int n, int m);
	fun2(g, name,n,m);
}
void fun2(int x[],char y[][10],int n,int m)
{
	int i = 0,j=0,tem=0;
	char ch[10] = { '\0' };
	for(i=0;i<n-1;i++)
		for (j = 0; j < n - 1 - i; j++)
		{
			if (x[j] > x[j + 1])
			{
				tem = x[j];
				strcpy(ch, y[j]);
				x[j] = x[j + 1];
				x[j + 1] = tem;
				strcpy(y[j], y[j+1]);
				strcpy(y[j + 1], ch);
			}
		}
	void fun3(int x[], char y[][10], int n, int m);
	fun3(x, y, n,m);
}
void fun3(int x[], char y[][10],int n,int m)
{
	int right = n-1, left = 0;
	int i = 0,j=0,sum=0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &j);
		while (left <= right)
		{
			sum = (left + right)/2;
			if (j > x[sum])
				left = sum + 1;
			else if (j < x[sum])
				right = sum - 1;
			else if (j == x[sum])
			{
				printf("%s\n", y[sum]);
				break;
			}
		}
	}
}
int main()
{
	int n = 0, m = 0;
	scanf("%d%d", &n, &m);
	fun1(n,m);
	return 0;
}


