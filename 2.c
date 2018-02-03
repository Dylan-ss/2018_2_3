/*一个数加上100后是一个完全平方数，再加上168后也是一个完全平方数*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	long int i, j, k;
	for(i = 0; i < 10000; i++)
	{
		j = sqrt(i + 100);
		k = sqrt(i + 268);
		if(((j * j) == (i + 100)) && ((k * k) == (i + 268)))
		{
			printf("\n%ld\n", i);
		}
	}
	return 0;
}
