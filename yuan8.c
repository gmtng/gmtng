//0x00007FF7FA7F30FD 处有未经处理的异常(在 Project8.exe 中): 堆栈 Cookie 检测代码检测到基于堆栈的缓冲区溢出。
//以上问题是由于高版本的VS所带来的，可以用下行代码解决。(scanf就不要加_s了）
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];//(这里有问题但我解决不了)重新梳理一下函数的逻辑，使用正确的索引即可

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
//下次再来解决这个bag吧(┬┬﹏┬┬)
//bag已解决(￣y▽,￣)╭ 