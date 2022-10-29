#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0, n = 0, r = 1,y=0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		r = r * i;
		y = y + r;
	}
	printf("%d", y);
	return 0;
}