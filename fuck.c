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
	struct Student stu[3];
	int i = 0,j=0;
	
	double ave[3] = {0}, max = 0;

	while (scanf("%d%s%lf%lf%lf", &stu[0].num, &stu[0].name, &stu[0].s1, &stu[0].s2, &stu[0].s3)!=EOF)
	{
		ave[0] = (stu[0].s1 + stu[0].s2 + stu[0].s3) / 3;
		for (i = 1; i < 3; i++)
		{
			scanf("%d%s%lf%lf%lf", &stu[i].num, &stu[i].name, &stu[i].s1, &stu[i].s2, &stu[i].s3);
			ave[i] = (stu[i].s1 + stu[i].s2 + stu[i].s3) / 3;
		}
		if (ave[0] > ave[1])
		{
			max = ave[0];
			j = 0;
		}
		else
		{
			max = ave[1];
			j = 1;
		}

		if (max < ave[2])
		{
			max = ave[2];
			j = 2;
		}
		else max = max;
		printf("%d\n%s\n%.2lf %.2lf %.2lf\n%.2lf\n", stu[j].num, stu[j].name, stu[j].s1, stu[j].s2, stu[j].s3, max);
	}
	return 0;
}