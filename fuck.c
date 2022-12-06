#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
long long fun(int x)
{
	if (x == 1)
		return 1;
	else
		return(x * fun(x - 1));
}
int main()
{
	int n = 0;
	long long m = 0;
	while (scanf("%d", &n) != EOF)
	{
		m = fun(n);
		printf("%ld\n", m);
	}
	return 0;
}