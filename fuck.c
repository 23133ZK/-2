#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int word = 0, i = 0, count = 0;//开头第一个单词，则word初始为0
	char arr[81] = { '\0' };
	gets(arr);
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ')//遇到空格则没有单词出现word=0
			word = 0;
		else if (word == 0)//空格后单词加一，则空格后遇到一个新的单词，word=0表示还没遇到单词，而word=1时遇到新单词
		{
			word = 1;
			count++;
		}
	}
	return 0;
}