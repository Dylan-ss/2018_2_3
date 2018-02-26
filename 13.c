/*模拟密码三次输入*/
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 0, i = 0;
	char pwd[] = "123456";
	char key[7];
	printf("请输入密码：");
	for(i = 0; i < 3; i++)
	{
		scanf("%s", key);
		printf("你输入的是：%s", key);
		a = strcmp(pwd, key);
		if(a != 0)
		{
			if(i < 2)
			{
				printf("密码错误!!!!\n请重新输入：");
			}
			else
			{
				printf("密码错误，超过次数\n");	
			}
		}
		else
		{
			printf("\n密码正确，请使用\n");
		}
	}
	return 0;
}
