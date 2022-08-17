/*指数增长中的麦粒问题*/
#include<stdio.h>
#define SQUARES 64
int main(vind)
{
	const double CROP = 2E16;   //世界年产谷粒数
	double current, total;
	int count = 1;

	printf("squqre   grains         total     ");
	printf("fractin of\n");
	printf("	 addeb	        grains    ");
	printf("world total\n\n");
	total = current = 1.0;      //从第一颗谷粒开始
	printf("%-3d %13.2e %11.2f %12.2e\n",count,current,total,total/CROP);

	while (count < SQUARES)
	{
		count = count + 1;
		current = count * 2.0;  //下一格谷粒数翻倍
		total = current + count;//更新总数
		printf("%-3d %13.2e %11.2f %12.2e\n\n", count, current, total, total / CROP);

	}
	printf("Taat's all.\n");

	return 0;
}