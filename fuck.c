#include <stdio.h>

int main()
{
	int a = 0;
	int a0, a1, a2, a3, a4;
	scanf("%d", &a);
	if (a < 100000 && a >= 10000)
	{
		a4 = a / 10000;
		a3 = (a - a4 * 10000) / 1000;
		a2 = (a - a4 * 10000 - a3 * 1000) / 100;
		a1 = (a - a4 * 10000 - a3 * 1000 - a2 * 100) / 10;
		a0 = a % 10;
		printf("5\n");
		printf("%d %d %d %d %d\n", a4, a3, a2, a1, a0);
		printf("%d%d%d%d%d\n", a0, a1, a2, a3, a4);
	}
	else if (a < 10000 && a >= 1000)
	{

		a3 = a / 1000;
		a2 = (a - a3 * 1000) / 100;
		a1 = (a - a3 * 1000 - a2 * 100) / 10;
		a0 = a % 10;
		printf("4\n");
		printf("%d %d %d %d\n", a3, a2, a1, a0);
		printf("%d%d%d%d\n", a0, a1, a2, a3);
	}
	else if (a < 1000 && a >= 100)
	{


		a2 = a / 100;
		a1 = (a - a2 * 100) / 10;
		a0 = a % 10;
		printf("3\n");
		printf("%d %d %d\n", a2, a1, a0);
		printf("%d%d%d\n", a0, a1, a2);
	}
	else if (a < 100 && a >= 10)
	{
		a1 = a / 10;
		a0 = a % 10;
		printf("2\n");
		printf("%d %d\n", a1, a0);
		printf("%d%d\n", a0, a1);
	}
	else if (a < 10 && a >= 0)
	{

		a0 = a % 10;
		printf("1\n");
		printf("%d\n", a0);
		printf("%d\n", a0);
	}
	return 0;
}