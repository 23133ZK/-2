#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int N = 0,i=0;
	int a = 0,count=0;
	scanf("%d", &N);
	for (i = N; i; i--)
	{
		if (i < 10000 && i >= 1000)
		{
			a = i / 1000;
			if (a == 1)
				count++;
			a = i % 1000 / 100;
			if (a == 1)
				count++;
			a = i % 1000 % 100 / 10;
			if (a == 1)
				count++;
			a = i % 10;
			if (a == 1)
				count++;
		}
		if (i < 1000 && i >= 100)
		{
			
			a = i % 1000 / 100;
			if (a == 1)
				count++;
			a = i % 1000 % 100 / 10;
			if (a == 1)
				count++;
			a = i % 10;
			if (a == 1)
				count++;
		}
		if (i < 100 && i >= 10)
		{
			
			a = i % 1000 % 100 / 10;
			if (a == 1)
				count++;
			a = i % 10;
			if (a == 1)
				count++;
		}
		if (i < 10 && i >= 1)
		{
			
			a = i % 10;
			if (a == 1)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}