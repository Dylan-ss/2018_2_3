/*打印图形*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, j, k;
	int SUM;
	int N;
	int m;
	printf("请输入要打印的行数：");
	scanf("%d", &SUM);
	k = SUM % 2;
	if(k == 0)
	{
		N = SUM / 2;
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < (N - i - 1); j++)
			{
				putchar(' ');
			}
			for(j = 0; j < (2 * i + 1); j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
		for(i = N; i > 0; i--)
		{
			for(j = 0; j < (N - i); j++)
			{
				putchar(' ');
			}
			for(j = 0; j < (2 * i - 1); j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
	}
	else
	{
		N = SUM / 2;
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
		for(m = 0; m < (2 * N + 1); m++)
		{
			putchar('*');
		}
		putchar('\n');
		for(i = N; i > 0; i--)
		{
			for(j = 0; j < (N - i + 1); j++)
			{
				putchar(' ');
			}
			for(j = 0; j < (2 * i - 1); j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
	}
	return 0;
}
