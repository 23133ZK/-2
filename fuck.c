#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	int arr[100] = { 0 };
	int n = 0,i,sz=0,tem=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sz = n;
	for (i = 0, sz--; i <= n / 2; i++, sz--)
	{
		tem = arr[i];
		arr[i] = arr[sz];
		arr[sz] = tem;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}