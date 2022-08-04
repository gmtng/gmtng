/*数字进制的转化*/
#include<stdio.h>
int main(void)
{
	int a;
	printf("输入数字--\b\b");
	scanf_s("%d",&a);

	char d, o, h;
	d = 'd'; o = 'o'; h = 'h';

	printf("\n%cec=%d,%cctal=%o,%cex=%x\n", d, a, o, a, h, a);
	//%d 打印字符对应编码，%从打印对应字符
	printf("dec=%d,octal=%#o,hex=%#x\n", a, a, a);
	printf("十进制，八进制，十六进制。\n");

	printf（“\a”);
	//引用转义序列--警报

	return 0;
}
