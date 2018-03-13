/*利用递归函数调用方式，将输入的5个字符，以相反顺序打印出来*/

#include <stdio.h>
void palin(int n);
int main(int argc, const char *argv[])
{
	int i = 5;
	printf("请输入:");
	palin(i);
	printf("\n");
	getchar();
	return 0;
}

void palin(int n)
{
	char next;
	if(n <= 1)
	{
		next = getchar();
		printf("取反后:");
		putchar(next);
	}
	else
	{
		next = getchar();
		palin(n - 1);
		putchar(next);
	}
}
