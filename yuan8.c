//0x00007FF7FA7F30FD ����δ��������쳣(�� Project8.exe ��): ��ջ Cookie �������⵽���ڶ�ջ�Ļ����������
//�������������ڸ߰汾��VS�������ģ����������д�������(scanf�Ͳ�Ҫ��_s�ˣ�
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];//(���������⵫�ҽ������)��������һ�º������߼���ʹ����ȷ����������

	printf("Hi!what's your first name\n");
	scanf("%s",name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s your volume is %2.2f cubic feet.\n", name, volume );
	printf("Also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it .\n",size);

	return 0;
}
//�´�����������bag��(�ЩЩn�Щ�)
//bag�ѽ��(��y��,��)�q 