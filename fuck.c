#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

void fun(char b[])
{
	int len = strlen(b);
	int c[12] = { 0 };
	int i = 0, x = len-1;
	long long sum = 0;
	for (i = 0, x; i < len ; i++, x--)
	{
		if (b[x] >= '0' && b[x] <= '9')
			c[i] = b[x]-48;
		else
			c[i] = b[x] - 55;
	}
	for (i = 0; i < len; i++)
		printf("%d ", c[i]);
	for (x = 0, i = 0; x < len ; x++, i++)
		sum += c[x] * pow(16, i);
	printf("%lld\n", sum);
}

int main()
{
	char a[13] = { '\0' };
	while(gets(a))
	fun(a);
	return 0;
}