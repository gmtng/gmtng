//转换说明和数据打印的修饰
#include<stdio.h>
int main(void)
{
	const double RENT = 3852.99;//const变量（只读）

	printf("%%f      *%f*\n", RENT);
	printf("%%e      *%e*\n", RENT );
	printf("%%4.2f   *%4.2f*\n", RENT );
	printf("%%3.1f   *%3.1f*\n\n", RENT );

	printf("%%012.3f *%012.3f*\n\n", RENT);

	printf("%%10.3f  *%10.3f*\n", RENT);
	printf("%%10.3E  *%10.3E*\n", RENT);
	printf("%%+4.2f  *%+4.2f*\n", RENT);
	printf("%%010.2f *%010.2f*\n\n", RENT);

	int a = 68;
    printf("* %d * %o  * %x\n",a,a,a);
	printf("* %d * %#o * %#x\n\n", a, a, a);

	printf("* %+d* %+d\n", -68,34 );

	return 0;
}