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
//Ҫȡ����Ϊ�����������ȫ������
	for (i; i < max; i++)
	{
		for (j; j < max; j++)
		{
			tem = *(*(p1 + i) + j);
			//printf("%d ", tem);����
			*(*(p1 + i) + j) = *(*(p2 + j) + i);
			*(*(p2 + j) + i) = tem;
		}
		x++;
//x������i��j�´δ����￪ʼ�ı�־
//eg����һ��ѭ���ǰѵ�һ�����һ���滻��ϣ����ڶ���Ӧ�ôӵڶ��еĵڶ�����ʼ��Ϊ���еĿ�ͷ�ٴ��滻
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

