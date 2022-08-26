#include<stdio.h>
#define SCE_PER_MIN 60//1分钟60秒
int main(void)
{
	int sec, min, left;
	
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the numder of seconds (<=0 to quit):\n");
	scanf_s("%d", &sec);//读取秒数
	while (sec > 0)//别打分号！
	{
		min = sec / SCE_PER_MIN;//截断分钟数
		left = sec % SCE_PER_MIN;//剩下秒数
		printf("%d seconds is %d minutes,%d ceconds.\n",sec,min,left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d",&sec);
	}
	printf("Done!\n");

	return 0;
}