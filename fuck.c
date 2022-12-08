#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void move(char x,char y)
{
	printf("%c-->%c\n", x, y);
}
void hanoi(int n, char a,char b,char c)
{
	if (n == 1)
		move(a, c);//当A处只有一个时直接移动到C柱（这也就是一个出口）
	else
	{
		hanoi(n - 1, a, c, b);//第一步将n-1个盘子通过c柱移动到B柱，C柱为工具柱
		move(a, c);//第二步将A柱上的最后一个直接移动到C柱（也就是在除了C柱上的最大的盘子（在A柱和B柱上的最大盘子）移到C柱）
		hanoi(n - 1, b, a, c);//第三步将b上的n-1个盘子移动到C柱，A柱为工具柱

	}
}
//汉诺塔递归本质：将在A柱上的n个盘子通过B柱移动到C柱
//只能一个一个移动，故要先把A柱最后一个盘子移动到C柱，然后依次类推
int main()
{
	int n = 0;
	while(scanf("%d", &n)!=EOF)
	hanoi(n,'A','B','C');//将n个盘子移动到C柱，B为工具柱
	return 0;
}
