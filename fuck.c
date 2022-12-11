#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void fun(char b[])
{
	int i = 0, j = 0;
	char x = 0;
	for(i=0;i<9;i++)
		for (j = 0; j < 9 - i; j++)
		{
			if (b[j] > b[j + 1])
			{
				x = b[j];
				b[j] = b[j + 1];
				b[j + 1] = x;
			}
		}
	printf("%s\n", b);
}
int main()
{
	char a[11] = { '\0' };//gets会储存回车，故要有11个
	while(gets(a))
	fun(a);
	return 0;
}
