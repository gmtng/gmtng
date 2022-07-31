#include<stdio.h>
#define zhi "My second code"
void one_three(void);
void jiuzhi(void);
int main(void)
{
	printf("staring nom : \n");
	one_three();
	printf("done!\n");
	jiuzhi();
	printf("%s\n", zhi);

	return 0;
}
void one_three(void)
{
	printf("one\ntwo\nthree\n");
}
void jiuzhi(void)
{
	int a = 1;
	int b = a * 5;
	printf("%d\n", b);
}//成功运行，没有bag.