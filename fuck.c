#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
//计算一个数中储存在计算机中二进制位的1的个数
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	/*while (n)只能算正数
	{
		if (n % 2 == 1)
			count++;
		n >>= 1;
	}*/
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((n >>= i) & 1))
			count++;
	}
	//按位与&两位同时为1，结果才为1，否则结果为0，用的是补码
	//按位或有一则为一，否则为0
	//按位异或相同为0，相异为1
	printf("%d", count);
	return 0;
}