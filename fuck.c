#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
long long LCM(unsigned int x, unsigned int y)
{
	long long i = 0,a=0,b=0;
	for (i = y; i; i++)
	{
		a = i % x;
		b = i % y;
		if (a == 0 && b == 0)
		{
			return i;
			break;
		}
	}
}
int main()
{
	int T = 0;
	long long j = 0;
	unsigned int n = 0, m = 0;
	scanf("%d", &T);
	for (; T; T--)
	{
		scanf("%d%d", &n, &m);
		j = LCM(n, m);
		printf("%d\n", j);
	}
	return 0;
}