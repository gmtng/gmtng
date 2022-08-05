/*浮点数的舍入错误，计算指定类型大小,值上（下）溢出*/
#include<stdio.h>
int main(void)
{
	float a, b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;

	printf("b=2.0e20+1.0\n");
	printf("b=%f\n",b);
	printf("a=b-1\n");
	printf("a=%f\n\n",a);

	//类型大小的计算
	printf("Type int has a size of %zd dytes.\n",sizeof(int));
	printf("Type char has a size of %zd dytes.\n", sizeof(char));
	printf("Type long has a size of %zd dytes.\n", sizeof(long));
	printf("Type longlong has a size of %zd dytes.\n", sizeof(long long));
	printf("Type double has a size of %zd dytes.\n", sizeof(double));
	printf("Type long double has a size of %zd dytes.\n", sizeof(long double));
	printf("Type float has a size of %zd dytes.\n", sizeof(float));
	//以后设计一个先输入在计算的程序

	//浮点值的上溢和下溢
	float c = 9.5e66 / 3;
	printf("\n上溢=%e", c);//下溢
	float d= 4.7e56 * 2;
	printf("\n下溢=%e", d);//上溢
	//inf意义为无限

	return 0;
}