#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

struct Student
{
	int num;
	char name[11];
	double s1;
	double s2;
	double s3;
};
int main()
{
	struct Student stu[20];
	int i = 0, j = 0,N=0;

	double ave[20] = { 0 };

	while (scanf("%d", &N) != EOF)
	{
		
		for (i = 0; i < N; i++)
		{
			scanf("%d%s%lf%lf%lf", &stu[i].num, &stu[i].name, &stu[i].s1, &stu[i].s2, &stu[i].s3);
			ave[i] = (stu[i].s1 + stu[i].s2 + stu[i].s3) / 3;
		}
		double max = ave[0];
		j = 0;
		for (i = 1; i < N; i++)
		{
			if (max < ave[i])
			{
				max = ave[i];
				j = i;
			}
		}
		for (i = 0; i < N; i++)
		{
			printf("%d %s %.0lf %.0lf %.0lf %.2lf\n", stu[i].num, stu[i].name, stu[i].s1, stu[i].s2, stu[i].s3,ave[i]);
		}
		printf("MAX:%d %s %.0lf %.0lf %.0lf %.2lf\n\n", stu[j].num, stu[j].name, stu[j].s1, stu[j].s2, stu[j].s3, max);
	}
	return 0;
}