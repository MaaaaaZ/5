
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	printf("Hello\tWor\rld");
	//OHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
	printf("%d\n", 't');
	printf("%o\n", 't');
	printf("%x\n", 't');//瞎写的注释，啥也不是

	char *p = "zheng";
	//尝试把注释插入代码，结果失败了....
	printf("%s\n", p);

	printf("%d\n", strlen("1234567"));
	//尝试写注释

	printf("%d\n", strlen("c:\te\tst\6\n28\t\nes\at.c"));
	//注释竟然是绿色的，哈哈哈哈

	int sex = 0;

	printf("你是男是女？(男性选1，女性选2)");
	scanf("%d", &sex);
	if (sex == 1)
	{
		printf("你好，铁子\n");
	}
	else
	{
		printf("你好，姐妹\n");
	}

	


	return 0;
}