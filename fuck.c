#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>


int main()
{
	int N = 0;
	int i = 0,f1=1,f2=1;
	;
	for(scanf("%d", &N);N!=0;scanf("%d", &N))
	{
		if (N == 1 || N == 2)
		{
			printf("1\n");
			continue;
		}
		for (i = (N - 1) / 2; i; i--)
		{
			f1 = f1 + f2;
			f2 = f2 + f1;

		}
		if(N%2==1)
		printf("%d\n", f1);
		else
		printf("%d\n", f2);
		f1 = 1;
		f2 = 1;
	}
	return 0;
}