#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int t = 0,i,k=0,j=0,n=0;
	char arr[101]={'\0'};
	char * p1 = arr, * p = p1;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		p = p1;
		scanf("%s", arr);
		while (arr[j] != '\0')
		{
			if(arr[j]!='\n')
			p++;
			j++;
		}
		
		k = p - p1;
		printf("%d\n", k);
		for (n = 0; n < k; n++)
			arr[n] = '0';
		j = 0;
	}
	return 0;
}