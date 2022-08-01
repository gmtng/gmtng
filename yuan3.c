/*与体重相等的白金价格*/
#include<stdio.h>
int main(void)
{
	float weight;//你的体重
	float value;//等重白金价值

	printf("Are you worth your wewihgt in platinum?\n ");
	printf("Let's check ti out.\n");
	printf("please enter your weight in pounds:");

	//获取输入_英磅
	scanf("%f",&weight);//(´。＿。｀)
	//设白金&1700/盎司
	//1英磅=14.5833盎司

	value = 1700.0 * weight * 14.5833;
	printf("your weight in platunm $%.2f.\n", value);
	printf("you are easily woth that!if platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}//一个有bag的程序跑不动。╥﹏╥...