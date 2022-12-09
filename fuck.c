#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
swap(int* x, int* p)
{
	int tem = 0;
	tem = *p;
	*p = *x;
	*x = tem;
}
int min(int x[],int* p)
{
	int tem = x[0], i = 0, j = -1;
	for (i = 0; i < 10; i++)
	{
		if (x[i] < tem)
		{
			tem = x[i];
			j = i;
		}
	}
	if(j!=-1)
	swap(&x[j], p);
}
int max(int x[], int* p)
{
	int tem = x[9], i = 0,j=-1;//j用来记录最大或最小元素下标，tem用来记录最值元素的值
	for (i = 0; i < 10; i++)
	{
		if (x[i] > tem)
		{
			tem = x[i];
			j = i;
		}
	}
	if (j != -1)//判断是否交换
	swap(&x[j], p);
}
int main()
{
	int i,t = 0, a[10] ,* pn =a,* pm=a+9,j=0;//pm和pn分别指向最后一个和第一个数组元素地址
	scanf("%d", &t);
	for (j = 0; j < t; j++)
	{
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &a[i]);
		}
		min(a, pn);
		max(a, pm);
		for (i = 0; i < 9; i++)
		{
			printf("%d ", a[i]);
		}
		printf("%d\n", a[9]);
	}
	return 0;
}
