#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int fun(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int max(int x, int y, int z, int w)
{
	int tem = x;
	tem=fun(tem, y);
	tem=fun(tem, z);
	tem=fun(tem, w);
	return tem;
}
int main()
{
	int a, b, c, d;
	while(scanf("%d%d%d%d", &a, &b, &c, &d)!=EOF)
	printf("%d\n",max(a, b, c, d));
	return 0;
}
