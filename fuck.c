#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

struct Student
{
	int num;
	char name[10];
	double s;
};
void move(struct Student x[], int n)
{
	int i = 0, j = 0;
	struct Student y;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
		{
			if (x[j].s < x[j + 1].s)
			{
				y = x[j];
				x[j] = x[j + 1];
				x[j + 1] = y;
			}
			else if (x[j].s == x[j + 1].s)
			{
				if (x[j].num > x[j + 1].num)
				{
					y = x[j];
					x[j] = x[j + 1];
					x[j + 1] = y;
				}
			}
		}
}
int main()
{
	struct Student stu[100];
	int n = 0, i = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
			scanf("%d%s%lf", &stu[i].num, &stu[i].name, &stu[i].s);
		move(stu, n);
		for (i = 0; i < n; i++)
			printf("%d %s %.2lf\n", stu[i].num, stu[i].name, stu[i].s);
	}
	return 0;
}