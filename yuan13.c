#include<stdio.h>
#define SCE_PER_MIN 60//1����60��
int main(void)
{
	int sec, min, left;
	
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the numder of seconds (<=0 to quit):\n");
	scanf_s("%d", &sec);//��ȡ����
	while (sec > 0)//���ֺţ�
	{
		min = sec / SCE_PER_MIN;//�ضϷ�����
		left = sec % SCE_PER_MIN;//ʣ������
		printf("%d seconds is %d minutes,%d ceconds.\n",sec,min,left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d",&sec);
	}
	printf("Done!\n");

	return 0;
}