/*输出9*9乘法表*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			printf("%d*%d = %-2d\t", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}


