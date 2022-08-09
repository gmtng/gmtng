//c中各种类型值的限制(名示常量)
#include <stdio.h>
#include <limits.h>

int main(void)
{

	printf("The number of bits in a byte %d\n\n", CHAR_BIT);//定义一个字节的比特数。

	printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);//定义一个有符号字符的最小值。
	printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);//定义一个有符号字符的最大值。
	printf("The maximum value of UNSIGNED CHAR = %d\n\n", UCHAR_MAX);//定义一个无符号字符的最大值。

	printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);//定义一个短整型的最小值。
	printf("The maximum value of SHORT INT = %d\n\n", SHRT_MAX);//定义一个短整型的最大值。

	printf("The minimum value of INT = %d\n", INT_MIN);//定义一个整型的最小值。
	printf("The maximum value of INT = %d\n\n", INT_MAX);//定义一个整型的最大值。

	printf("The minimum value of CHAR = %d\n", CHAR_MIN);//定义类型 char 的最小值，如果 char 表示负值，则它的值等于 SCHAR_MIN，否则等于 0。
	printf("The maximum value of CHAR = %d\n\n", CHAR_MAX);//定义类型 char 的最大值，如果 char 表示负值，则它的值等于 SCHAR_MAX，否则等于 UCHAR_MAX。

	printf("The minimum value of LONG = %ld\n", LONG_MIN);//定义一个长整型的最小值。
	printf("The maximum value of LONG = %ld\n\n", LONG_MAX);//定义一个长整型的最大值。

	return 0;
}
/*MB_LEN_MAX	1	定义多字节字符中的最大字节数。
USHRT_MAX	65535	定义一个无符号短整型的最大值。
UINT_MAX	4294967295	定义一个无符号整型的最大值。
ULONG_MAX	1.8446744e+19	定义一个无符号长整型的最大值。*/