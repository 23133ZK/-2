#include <stdio.h>
#include<math.h>

int power(int x, int y)
{
	int z = 0;
	for (int i = 1; i <= x; i++)
		z = pow(i,y) + z;
	return z;
}
int main()
{
	int n, k;
	int result = 0;
	scanf_s("%d%d", &n, &k);
	result=power(n, k);
	printf("%d", result);
	return 0;
}
