#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	short a = 0;
	int b = 10;
	printf("%d\n", sizeof(a = b + 5));//2,ֻ�������ڴ��С�����ηŵ��������ﻹ�Ƕ�����,a˵����
	//sizeof��ı��ʽ����������
	printf("%d\n", a);


	//ȡ������λ��ȡ��
	int c = 11;
	c = c | (1 << 2);
	printf("%d\n", c);
	c = c & (~(1 << 2));
	printf("%d\n", c);
	//++ --
	int z = 1;
	printf("%d", ++c);//�ȼӺ��ӡ�������2
	//i=a++&&b++��aΪ��ʱ����Ķ������ˣ�ͬ��||
	//����������exp1��exp2��exp3
	int a = 0;
	int b = 0;
	int max = 0;
	b = (a > 5 ? 3 : -3);
	max = (a > b ? a : b);
	return 0;
}