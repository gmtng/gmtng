//0x00007FF7FA7F30FD 处有未经处理的异常(在 Project8.exe 中): 堆栈 Cookie 检测代码检测到基于堆栈的缓冲区溢出。
//以上问题是由于高版本的VS所带来的，可以用下行代码解决。(scanf就不要加_s了）
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4//人体密度，磅/立方英尺
int main(void)
{
	float weight;
	int size, letters,
		conversion = 0.972;//1磅=0.972斤
	double _conversion = 35.3146667;//1立方米=35.3146667立方英尺
	long double volume;
	char name[40];//可容纳40字符的组数，(这里有问题但我解决不了)重新梳理一下函数的逻辑，使用正确的索引即可

	printf("Hi!what's your first name\n");//输入你的名字
	scanf("%s", name);
	printf("%s,what's your weight in pound?\n", name);//输入你的斤数
	scanf("%f", &weight);

	size = sizeof(name);//占用字节
	letters = strlen(name);//占用字符
	volume = weight / DENSITY / conversion / _conversion;//有点多余，下次可以改进成自带单位换算
	//那是不是要两条程序路径？

	printf("Well,%s your volume is %2.2f cubic meters.\n", name, volume);//回答你的体积（立方米）
	printf("Also,your first name has %d letters,\n", letters);//回答名字字母数
	printf("and we have %d bytes to store it .\n", size);//名字占用的字节

	return 0;
}
//下次再来解决这个bag吧(┬┬﹏┬┬)
//bag已解决(￣y▽,￣)╭
//_conversion 尾数过多让 volume 结果容易为 inf（无限）
