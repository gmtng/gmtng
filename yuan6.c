/*��������������󣬼���ָ�����ʹ�С,ֵ�ϣ��£����*/
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

	//���ʹ�С�ļ���
	printf("Type int has a size of %zd dytes.\n",sizeof(int));
	printf("Type char has a size of %zd dytes.\n", sizeof(char));
	printf("Type long has a size of %zd dytes.\n", sizeof(long));
	printf("Type longlong has a size of %zd dytes.\n", sizeof(long long));
	printf("Type double has a size of %zd dytes.\n", sizeof(double));
	printf("Type long double has a size of %zd dytes.\n", sizeof(long double));
	printf("Type float has a size of %zd dytes.\n", sizeof(float));
	//�Ժ����һ���������ڼ���ĳ���

	//����ֵ�����������
	float c = 9.5e66 / 3;
	printf("\n����=%e", c);//����
	float d= 4.7e56 * 2;
	printf("\n����=%e", d);//����
	//inf����Ϊ����

	return 0;
}