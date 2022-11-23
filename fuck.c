#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	int n = 0,i=0,j=0,tem=0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for(j=0;j<n-i-1;j++)
			if (arr[j] > arr[j + 1])
			{
				tem = arr[j];
				
				arr[j] = arr[j+1];
				arr[j + 1] = tem;
			}
			
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}