#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int MAX(int n, int m)
{
	if (n > m || n == m)
		return n;
	else return m;
}
void move(int a[100][100], int n, int m)
{
	int (*p1)[100] = a, (*p2)[100] = a;
	int i = 0, j = 0,tem=0,x=0,max=MAX(n,m);
//要取最大的为矩阵长与宽，才能全部换完
	for (i; i < max; i++)
	{
		for (j; j < max; j++)
		{
			tem = *(*(p1 + i) + j);
			//printf("%d ", tem);调试
			*(*(p1 + i) + j) = *(*(p2 + j) + i);
			*(*(p2 + j) + i) = tem;
		}
		x++;
//x用来做i与j下次从那里开始的标志
//eg：第一次循环是把第一行与第一列替换完毕，而第二次应该从第二行的第二个开始作为行列的开头再次替换
		i = x;
		j = x;
	}
}
int main()
{
	int n = 0, m = 0, i = 0,j=0;
	int a[100][100];

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	move(a, n, m);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}

