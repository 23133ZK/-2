#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int t = 0,i,m=0,j=0,n=100;
	char a1[100] = { 0 }, a2[100] = { 0 }, a3[100] = { 0 };
	char* p1 = a1,* p2=a2;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%s %d %s", a1, &m, a2);
		n = 100;
		j = m - 1;
		p1 = a1;
		p2 = a2;
		p1 = p1 + (m - 1);
		//注意字符串1要交换部分与字符串2的长度，要取长者，才能完美交换
		while (n)
		{
			*p1 = *p2;
			j++;
			p1++;
			p2++;
			n--;
		}
		printf("%s\n", a1);
	}
	
	return 0;
}