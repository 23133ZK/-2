#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	int arr[100] = { 0 };
	int n = 0,m=0,i=0;
	for(scanf("%d", &n),scanf("%d", &m);n != 0 && m != 0;scanf("%d", &n),scanf("%d", &m))
	{
		for (i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		for (i = 0; i < n; i++)
		{
			if (m > arr[i])
				printf("%d ", arr[i]);
			else
			{
				printf("%d ", m);
				break;
			}
		}
		for (i; i < n-1; i++)
			printf("%d ", arr[i]);
		printf("%d\n",arr[n-1]);
		for (i = 0; i < n; i++)
			arr[i] = 0;
	}
	return 0;
}