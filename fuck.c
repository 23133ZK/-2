#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int word = 0, i = 0, count = 0;//��ͷ��һ�����ʣ���word��ʼΪ0
	char arr[81] = { '\0' };
	gets(arr);
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ')//�����ո���û�е��ʳ���word=0
			word = 0;
		else if (word == 0)//�ո�󵥴ʼ�һ����ո������һ���µĵ��ʣ�word=0��ʾ��û�������ʣ���word=1ʱ�����µ���
		{
			word = 1;
			count++;
		}
	}
	return 0;
}