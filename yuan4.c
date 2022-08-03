#include<stdio.h>
int main(void)
{
	int a = 66;
	
	printf("dec=%d,octal=%o,hex=%x\n", a, a, a);
	printf("dec=%d,octal=%#o,hex=%#x\n", a, a, a);
	printf("十进制，八进制，十六进制。\n");

	char ch;
	ch= 'A';
	printf("\a");

	return 0;
}