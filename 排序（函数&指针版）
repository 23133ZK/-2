#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n = 0, i = 0, j = 0, k = 0;
	int a[100] = { 0 };
	int* p = a;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n - 1; i++)
	{
		p = a;
		for (j = 0; j < n - 1 - i; j++, p++)
		{
			if (*p > *(p + 1))
			{
				k = *p;
				*p = *(p + 1);
				*(p + 1) = k;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
		printf("%d ", a[i]);
	printf("%d", a[i]);
	return 0;
}

