#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i=0,j=0,N = 0,t=0,k=0;
	int arr[39][39];
	scanf("%d", &N);
	for (i = 0; i < 39; i++)
	{
		for (j = 0; j < 39; j++)
			arr[i][j] = 0;
	}
	arr[0][N / 2] = 1;
	for (i = 2; i <= N * N; i++)
	{
		for (j = 0; j < N-1; j++)
		{
			if (arr[0][j] == i - 1)
			{
				arr[N - 1][j + 1] = i;
				break;
			}
		}
		for (j = 1; j < N ; j++)
		{
			if (arr[j][N-1] == i - 1)
			{
				arr[j-1][0] = i;
				break;
			}
		}
		if (arr[0][N - 1] == i - 1)
			arr[1][N - 1] = i;
		for (t = 1; t < N; t++)
		{
			for (k = 0; k < N - 1; k++)
			{
				if (arr[t][k] == i - 1)
				{
					if (arr[t - 1][k + 1] == 0)
						arr[t - 1][k + 1] = i;
					else
						arr[t + 1][k] = i;
				}
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}