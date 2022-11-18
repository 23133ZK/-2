#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char a[20];
	int sz = 0;
	while (scanf("%s", a) != EOF)
	{
		sz = sizeof(a) / sizeof(a[0]);
		for (int i = 0; i < sz; i++)
		{
			if (a[i] >= 'A' && a[i] <= 'V' || a[i] >= 'a' && a[i] <= 'v')
				a[i] = a[i] + 4;
			else if (a[i] >= 'W' && a[i] <= 'Z' || a[i] >= 'w' && a[i] <= 'z')
				a[i] = a[i] - 22;
		}
		printf("%s\n", a);
	}
	return 0;
}