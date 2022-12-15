#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	char name[3][10];
	int n, a = 0, b = 0, c = 0,i,m;
	while (scanf("%s%s%s",name[0],name[1], name[2])!=EOF)
	{
		
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &m);
			if (m == 1)
				a++;
			else if (m == 2)
				b++;
			else if (m == 3)
				c++;
		}
		printf("Rusult:\n");
		printf("%s:%d\n", name[0], a);
		printf("%s:%d\n", name[1], b);
		printf("%s:%d\n", name[2], c);
		a = 0, b = 0, c = 0;
	}
	return 0;
}