#include<stdio.h>
#define SCE_PER_MIN 60//1∑÷÷”60√Î
int main(void)
{
	int sec, min, left;
	
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the numder of seconds (<=0 to quit):\n");
	scanf_s("%d", &sec);
	while (sec > 0)
	{
		min = sec / SCE_PER_MIN;
		left = sec % SCE_PER_MIN;
		printf("%d seconds is %d minutes,%d ceconds.\n",sec,min,left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d",&sec);
	}
	printf("Done!\n");

	return 0;
}