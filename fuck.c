#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	char s1[100] = { '\0' };
    char s2[100] = { '\0' };
	int sz1 = 0, sz2 = 0,i = 0,sum1=0,sum2=0;
	while (gets(s1)&&gets(s2))
	{
		sum1 = 0;
		sum2 = 0;
		sz1 = sizeof(s1) / sizeof(s1[0]);
		sz2 = sizeof(s2) / sizeof(s2[0]);
		for (i = 0; i < sz1; i++)
		{
			sum1 += s1[i];
		}
		for (i = 0; i < sz2; i++)
		{
			sum2 += s2[i];
		}
		
			printf("%d\n",sum1-sum2);
		for (i = 0; i < sz1; i++)
		{
			s1[i]='\0';
		}
		for (i = 0; i < sz2; i++)
		{
			s2[i] = '\0';
		}
	}
	return 0;
}