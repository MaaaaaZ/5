
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	printf("Hello\tWor\rld");
	//OHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
	printf("%d\n", 't');
	printf("%o\n", 't');
	printf("%x\n", 't');//Ϲд��ע�ͣ�ɶҲ����

	char *p = "zheng";
	//���԰�ע�Ͳ�����룬���ʧ����....
	printf("%s\n", p);

	printf("%d\n", strlen("1234567"));
	//����дע��

	printf("%d\n", strlen("c:\te\tst\6\n28\t\nes\at.c"));
	//ע�;�Ȼ����ɫ�ģ���������

	int sex = 0;

	printf("��������Ů��(����ѡ1��Ů��ѡ2)");
	scanf("%d", &sex);
	if (sex == 1)
	{
		printf("��ã�����\n");
	}
	else
	{
		printf("��ã�����\n");
	}

	


	return 0;
}