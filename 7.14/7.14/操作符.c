#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	short a = 0;
	int b = 10;
	printf("%d\n", sizeof(a = b + 5));//2,只算所在内存大小，整形放到短整形里还是短整形,a说了算
	//sizeof里的表达式不参与运算
	printf("%d\n", a);


	//取反第三位数取反
	int c = 11;
	c = c | (1 << 2);
	printf("%d\n", c);
	c = c & (~(1 << 2));
	printf("%d\n", c);
	//++ --
	int z = 1;
	printf("%d", ++c);//先加后打印，结果是2
	//i=a++&&b++，a为假时后面的都不算了，同理||
	//条件操作符exp1？exp2：exp3
	int a = 0;
	int b = 0;
	int max = 0;
	b = (a > 5 ? 3 : -3);
	max = (a > b ? a : b);
	return 0;
}