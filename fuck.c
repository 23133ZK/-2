#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

void fun(char name[10][10], int fen[10][5])
{
	int i = 0, j = 0, i1 = 0, j1 = 0;//j1��i1������¼���ʱ�������Ŀ
	double sum = 0, ave = 0, most=0,D=0,s=0;
	printf("10λѧ��ƽ����������:");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
			sum += fen[i][j];
		ave = sum / 5;
		printf("%.2lf ", ave);
		sum = 0;
	}

	printf("\n5�ſγ̵�ƽ����������:");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
			sum += fen[j][i];
		ave = sum / 10;
		printf("%.2lf ", ave);
		sum = 0;
	}

	printf("\n50����������ߵķ�����:");
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
	printf("%.2lf,��ѧ��������%s,�ǵ�%d�ſγ�\n", most,name[i1], j1);

	printf("10��ѧ���ĳɼ��ķ�����:\n");
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


