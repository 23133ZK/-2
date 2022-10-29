#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	if (a > b)c = a;
	else c = b;
	printf("%d", c);
	return 0;
}