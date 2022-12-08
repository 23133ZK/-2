#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void fun(char x[], char y[], int A, int B)
{
	char t;
	int j = A-1, k = B-1,i=0;
	for (i = 0; i < A / 2; i++, j--)
	{
		t = x[i];
		x[i] = x[j];
		x[j] = t;
	}
	for (i = 0; i < B / 2; i++, k--)
	{
		t = y[i];
		y[i] = y[k];
		y[k] = t;
	}
	printf("%s\n", strcat(x, y));
}
int main()
{
	char a[50] = { '\0' }, b[50] = { '\0' },ch;
	int len1 = 0, len2 = 0;
	while (scanf("%s %s", a, b) != EOF)
	{
		len1 = strlen(a);
		len2 = strlen(b);
		fun(a, b, len1, len2);
	}
	return 0;
}
