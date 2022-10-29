#include<stdio.h>
#include<math.h>

int main()
{
	int t, i, r, y;
	scanf_s("%d", &t);
	i = t % 4;
	r = t % 100;
	y = t % 400;
	if (i == 0 && r != 0 || y == 0)
	{
		printf("ÈòÄê\n");
	}
	else 
	{
		printf("·ÇÈòÄê");
	}
	return 0;
}