#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	int arr[101] = { 0 };
	int n = 0, m = 0, i = 0,tem=0,j;
	for (scanf("%d", &n), scanf("%d", &m); n != 0 && m != 0; scanf("%d", &n), scanf("%d", &m))
	{
		for (i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		for (i = 0; i < n; i++)
		{
			if (m > arr[i])
				continue;
			else
			{
				tem = arr[i];
				arr[i]=m;
				break;
			}
		}
		if (i == n)arr[n] = m;
		for (j = n; j > i+1; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[i + 1] = tem;
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("%d\n",arr[n]);
		for (i = 0; i < n + 1; i++)
			arr[i] = 0;
	}
	return 0;
}