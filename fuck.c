#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void longest(char b[])
{
	char arr1[50] = { '\0' },arr2[50]={'\0'};
	int word = 0, len = 0, i = 0, j = 0,k=0,m=0;//j��k��������
	len = strlen(b);
	//���ֻ��<len�Ļ�arr1���������һ�����ʺ󲻻������½����ж�
	for (i = 0; i <= len; i++)//<=len�Ǳ���ʹ�������һ�����ʣ���Ϊstrlenֻ���㵽\0���ʵ�arr1���������һ�����ʺ��޷��ڽ���������ж�
	{
		if (b[i] >= 'A' && b[i] <= 'Z' || b[i]>='a' && b[i] <= 'z')
		{
			word = 1;
			arr1[j++] = b[i];
		}
		else if (word == 1&&j>k)
		{
			strcpy(arr2, arr1);
			k = j;
			j = 0;
			word = 0;
		}
		else if (j == k)
		{
			if (strcmp(arr1, arr2) < 0)
				strcpy(arr2, arr1);
			j = 0;
			word = 0;
		}

	}
	printf("%s\n", arr2);
}
int main()
{
	char a[50] = { '\0' };
	while(gets(a))
	longest(a);
	return 0;
}
