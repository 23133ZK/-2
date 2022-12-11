#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

void IS_leap_year(int m, int d)
{
	int sum = 0, i = 0;
	int a[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	for (i = 0; i < m; i++)
		sum += a[i];
	sum += d;
	printf("%d", sum);
}
void NOT_leap_year(int m, int d)
{
	int sum = 0, i = 0;
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (i = 0; i < m; i++)
		sum += a[i];
	sum += d;
	printf("%d", sum);
}
int main()
{
	int y, m, d;
	scanf("%d-%d-%d", &y, &m, &d);
	
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		IS_leap_year(m, d);
	else
		NOT_leap_year(m, d);
	return 0;
}


