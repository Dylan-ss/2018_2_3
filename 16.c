/*打印杨辉三角*/

#include <stdio.h>
#define MAX 20

int main(int argc, const char *argv[])
{
	int a[MAX][MAX] = {};
	int i, j;
	for(i = 0; i < MAX; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for(i = 2; i < MAX; i++)
	{
		for(j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < (MAX - i); j++)
		{
			putchar(' ');
			putchar(' ');
			putchar(' ');
		}
		for(j = 0; j <= i; j++)
		{
			printf("%6d", a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
