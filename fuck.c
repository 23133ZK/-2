#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
//void swap1(int* x, int* y)//�����ú����ڵ�ָ��������ͷ�
//{
//	int tem;
//	tem = *x;
//	*x = *y;
//	*y = tem;//a��b��ַ�ڵ�ֵ����
//}
// p1��p2�ֱ𴫸�x��y
// �ʿɵ�*x��*y��ֵ���н�����ʹ��a��b��ֵ���н���
//void swap2(int* x, int* y)//����д�����޷�ʵ��ֵ�Ľ���
//{
//	int* tem;
//	tem = x;
//	x = y;
//	y = tem;
//}
//1Ϊ��ȷд����2Ϊ����д����
//�ܽ᣺����ͨ��ִ�е��ú������ı�ʵ��ָ�������ֵ�����ǿ��Ըı�ʵ��ָ����ָ������ֵ
int main()
{
	int a = 10;
	int b = 20;
	int* p1 = 0;
	int* p2 = 0;
	p1 = &a;
	p2 = &b;
	//swap1(p1, p2);
	//swap2(p1, p2);
	printf("%d,%d\n", a, b);
	printf("%d,%d\n", *p1, *p2);
	return 0;
}