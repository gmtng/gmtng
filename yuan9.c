//c�и�������ֵ������(��ʾ����)
#include <stdio.h>
#include <limits.h>

int main(void)
{

	printf("The number of bits in a byte %d\n\n", CHAR_BIT);//����һ���ֽڵı�������

	printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);//����һ���з����ַ�����Сֵ��
	printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);//����һ���з����ַ������ֵ��
	printf("The maximum value of UNSIGNED CHAR = %d\n\n", UCHAR_MAX);//����һ���޷����ַ������ֵ��

	printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);//����һ�������͵���Сֵ��
	printf("The maximum value of SHORT INT = %d\n\n", SHRT_MAX);//����һ�������͵����ֵ��

	printf("The minimum value of INT = %d\n", INT_MIN);//����һ�����͵���Сֵ��
	printf("The maximum value of INT = %d\n\n", INT_MAX);//����һ�����͵����ֵ��

	printf("The minimum value of CHAR = %d\n", CHAR_MIN);//�������� char ����Сֵ����� char ��ʾ��ֵ��������ֵ���� SCHAR_MIN��������� 0��
	printf("The maximum value of CHAR = %d\n\n", CHAR_MAX);//�������� char �����ֵ����� char ��ʾ��ֵ��������ֵ���� SCHAR_MAX��������� UCHAR_MAX��

	printf("The minimum value of LONG = %ld\n", LONG_MIN);//����һ�������͵���Сֵ��
	printf("The maximum value of LONG = %ld\n\n", LONG_MAX);//����һ�������͵����ֵ��

	return 0;
}
/*MB_LEN_MAX	1	������ֽ��ַ��е�����ֽ�����
USHRT_MAX	65535	����һ���޷��Ŷ����͵����ֵ��
UINT_MAX	4294967295	����һ���޷������͵����ֵ��
ULONG_MAX	1.8446744e+19	����һ���޷��ų����͵����ֵ��*/