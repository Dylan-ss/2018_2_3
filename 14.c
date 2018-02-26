/*打印图形*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, j;
	int N;
	printf("请输入要打印的行数：");
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < (N - i); j++)
		{
			putchar(' ');
		}
		for(j = 0; j < (2 * i + 1); j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
