#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

void fun(char name[10][10], int fen[10][5])
{
	int i = 0, j = 0, i1 = 0, j1 = 0;//j1和i1用来记录最大时的人与科目
	double sum = 0, ave = 0, most=0,D=0,s=0;
	printf("10位学生平均分依次是:");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
			sum += fen[i][j];
		ave = sum / 5;
		printf("%.2lf ", ave);
		sum = 0;
	}

	printf("\n5门课程的平均分依次是:");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
			sum += fen[j][i];
		ave = sum / 10;
		printf("%.2lf ", ave);
		sum = 0;
	}

	printf("\n50个分数中最高的分数是:");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (fen[i][j] > most)
			{
				most = fen[i][j];
				i1 = i;
				j1 = j+1;
			}
		}
	}
	printf("%.2lf,该学生名字是%s,是第%d门课程\n", most,name[i1], j1);

	printf("10个学生的成绩的方差是:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%s:", name[i]);
		for (j = 0; j < 5; j++)
			sum += fen[i][j];
		ave = sum / 5;
		sum = 0;
		for (j = 0; j < 5; j++)
			s += (ave - fen[i][j])*(ave - fen[i][j]);
		D = s / 5.0;
		s = 0;
		printf("%.2lf\n", D);
	}
}
int main()
{
	char name[10][10];
	int fen[10][5];
	int i = 0, j = 0;
	while (scanf("%s", name[0]) != EOF)
	{
		for (i = 0; i < 10; i++)
		{
			if (i)
				scanf("%s", name[i]);
			for (j = 0; j < 5; j++)
				scanf("%d", &fen[i][j]);
		}
		fun(name, fen);
	}
	return 0;
}


