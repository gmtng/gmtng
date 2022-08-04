/*与体重相等的白金价格*/
#include<stdio.h>
int main(void)
{
	float weight;//你的体重
	float value;//等重白金价值

	printf("Are you worth your wewihgt in platinum?\n ");
	printf("Let's check ti out.\n");
	printf（“请输入您的体重（以磅为单位）：”）；
		
	getchar（）;等待用户输入，输入后回车继续，，如158
	scanf_s("%f",&weight);
	//VS编译器特有，觉得scanf()不安全，自己定义了scanf_s(）
	//获取输入_英磅	

	value = 1700.0 * weight * 14.5833;
	//1英磅=14.5833盎司,设白金&1700/盎司
	
	printf("your weight in platunm $%.2f.\n", value);
	printf("you are easily woth that!if platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}
//一个有bag的程序跑不动。╥﹏╥... 
//现在跑得动了。(￣y▽,￣)╭ 
