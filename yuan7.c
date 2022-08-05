/*年龄对应的秒数（指数计数法）*/
#include<stdio.h>
int main(viod)
{
	int Ld2;
	long double Ld1,Ld3;
	Ld1 = 3.156e7;
	//一年大约3.156e7秒

    printf("\nPress Enter after entering your age\n");
	printf("Your age：---\b\b\b");
	scanf_s("%d", &Ld2);
	Ld3 = Ld2 * Ld1;
	
	printf("You've survived for %.4e seconds\n",Ld3);

	return 0;
}