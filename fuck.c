#include <stdio.h>
int main()
{
	int m=0, n=0, a, b, c,i;
	scanf_s("%d%d", &m, &n);

	for (i=m;i<=n;i++)
	{
		a = i / 100;
		b = (i - 100*a) / 10;
		c = i % 10;
		
		if (i == a * a * a + b * b * b + c * c * c)
			printf("%d ", i);
		
	}
	if (n < 153 || m>407 || m > 153 && n < 370 || m>371 && n < 407)
	    printf("no\n");
	return 0;
}