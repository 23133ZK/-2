#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
//����һ�����д����ڼ�����ж�����λ��1�ĸ���
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	/*while (n)ֻ��������
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
	//��λ��&��λͬʱΪ1�������Ϊ1��������Ϊ0���õ��ǲ���
	//��λ����һ��Ϊһ������Ϊ0
	//��λ�����ͬΪ0������Ϊ1
	printf("%d", count);
	return 0;
}