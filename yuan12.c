/*ָ�������е���������*/
#include<stdio.h>
#define SQUARES 64
int main(vind)
{
	const double CROP = 2E16;   //�������������
	double current, total;
	int count = 1;

	printf("squqre   grains         total     ");
	printf("fractin of\n");
	printf("	 addeb	        grains    ");
	printf("world total\n\n");
	total = current = 1.0;      //�ӵ�һ�Ź�����ʼ
	printf("%-3d %13.2e %11.2f %12.2e\n",count,current,total,total/CROP);

	while (count < SQUARES)
	{
		count = count + 1;
		current = count * 2.0;  //��һ�����������
		total = current + count;//��������
		printf("%-3d %13.2e %11.2f %12.2e\n\n", count, current, total, total / CROP);

	}
	printf("Taat's all.\n");

	return 0;
}