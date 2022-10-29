#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0, t = 0, r = 1, p = 0;
	scanf_s("%d", &n);
	for (t = 1; t <= n; t++)
	{
		r = r * t;
		p = p + r;

	}
	printf("%d ", p);
	return 0;
}