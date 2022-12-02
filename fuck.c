#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char a[20][50];
	char b[50] = { '\0' };
	int i = 0, n = 0,j=0;
	scanf("%d", &n);
	for (i = 0; i < n+1; i++)
		gets(a[i]);
	for (i = 0; i < n-1; i++)
	{
		for (j = 1; j < n -i; j++)
		{
			if (strcmp(a[j],a[j+1])>0)
			{
				strcpy(b, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], b);
			}
		}
	}
	for (i = 1; i < n+1; i++)
	{
		puts(a[i]);
	}
	return 0;
}