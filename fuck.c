#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
char a[10000] = { '\0'};
int main()
{
	int d = 0, x = 0, number = 0, space = 0, other = 0,i=0;
	gets(a);
	char* p = a;
	int len = strlen(a);
	for (i = 0; i < len; i++,p++)
	{
		if ((*p <= '9' && *p >= '0') && *(p+1) == ' ')
			number++;
		if (*p <= 'Z' && *p >= 'A')
			d++;
		else if (*p <= 'z' && *p >= 'a')
			x++;
		else if (*p == ' ')
			space++;
		else if(*p<='0'||*p>='9')
			other++;
	}
	printf("upper case letters: %d\n", d);
	printf("lower case letters: %d\n", x);
	printf("space: %d\n", space);
	printf("number: %d\n", number);
	printf("other character: %d", other-1);
	//用数组时：other-1的原因为，当结束时，会以回车结束，会把回车吃进去，gu要减1才是最终答案
	//用指针时不用-1
	return 0;
}

