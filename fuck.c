#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char a[100] = { '\0' },ch=0;
	//ch�����������t��Ŀո���Ϊ������Ҫ�õ�gets��ѿո�Ե�������������һ������
	int b[50] = { '\0' };
	int count = 0,i=0,len=0,j=0,tem=0,m=0,t=0,k=0;
	//m�����������ж��ٸ�������j������������ʱ���ڸ�λ����λ֮���
	scanf("%d", &t);
	scanf("%c", &ch);
	for (k = 0; k < t; k++)
	{
		
		gets(a);

		len = strlen(a);
		char* p = a + len - 1;
		//i<=len�����һ��ѭ����ԭ��Ϊ�ڽ��������һ��ѭ��������������һ������Ϊ0-9ʱ�������else if��ᵼ�²��ܼ�¼���һ�����������
		for (i = 0; i <= len; i++, p--)
		{
			if (*p >= '0' && *p <= '9')
			{

				tem += (*p - '0') * pow(10, j);
				j++;

			}
			else if ((j && *p < '0') || (j && *p > '9'))
			{

				j = 0;
				b[m++] = tem;

				tem = 0;
			}
		}
		printf("%d\n", m);
		m = m - 1;
		for (m; m>0; m--)
			printf("%d ", b[m]);
		printf("%d", b[m]);
		//m�Լ�ֱ�ӹ���
		printf("\n");
		
	}
	return 0;
}