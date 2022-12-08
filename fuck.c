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
		move(a, c);//��A��ֻ��һ��ʱֱ���ƶ���C������Ҳ����һ�����ڣ�
	else
	{
		hanoi(n - 1, a, c, b);//��һ����n-1������ͨ��c���ƶ���B����C��Ϊ������
		move(a, c);//�ڶ�����A���ϵ����һ��ֱ���ƶ���C����Ҳ�����ڳ���C���ϵ��������ӣ���A����B���ϵ�������ӣ��Ƶ�C����
		hanoi(n - 1, b, a, c);//��������b�ϵ�n-1�������ƶ���C����A��Ϊ������

	}
}
//��ŵ���ݹ鱾�ʣ�����A���ϵ�n������ͨ��B���ƶ���C��
//ֻ��һ��һ���ƶ�����Ҫ�Ȱ�A�����һ�������ƶ���C����Ȼ����������
int main()
{
	int n = 0;
	while(scanf("%d", &n)!=EOF)
	hanoi(n,'A','B','C');//��n�������ƶ���C����BΪ������
	return 0;
}
