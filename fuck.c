#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
void longest(char b[])
{
	char arr1[50] = { '\0' },arr2[50]={'\0'};
	int word = 0, len = 0, i = 0, j = 0,k=0,m=0;//j和k用来计数
	len = strlen(b);
	//如果只是<len的话arr1接收了最后一个单词后不会再往下进行判断
	for (i = 0; i <= len; i++)//<=len是表明使用了最后一个单词，因为strlen只计算到\0，故当arr1接受了最后一个单词后，无法在进行下面的判断
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
