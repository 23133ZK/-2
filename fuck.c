#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void fun(int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
		printf("*");
	printf("\n");
}
int main()
{
	char a[50] = { '\0' };
	int i = 0, len = 0;
	while (gets(a))
	{
		len = strlen(a);
		fun(len);
		puts(a);
		fun(len);
	}
	return 0;
}