#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a != 0)
	{
		disc = b * b - 4 * a * c;
		if (disc > 0)
		{
			x1 = (-b + sqrt(disc)) / (2 * a);
			x2 = (-b - sqrt(disc)) / (2 * a);
			printf("%.4lf %.4lf\n", x1, x2);
		}
		else if (disc == 0)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("%.4lf", x1);
		}
		else if (disc < 0)
		{
			p = -b / 2 * a;
			q = sqrt(disc) / (2 * a);
			printf("%.4lf+%.4lfi\n", p, q);
			printf("%.4lf-%.4lfi\n", p, q);
		}
	}
	return 0;
}
