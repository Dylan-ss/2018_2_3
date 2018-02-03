/*有1，2，3，4这4个数字，能组成多少个互相不相同且无重复的三位数*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;
	for(i = 1; i <= 4; i++)
	{
		for(j = 1; j <= 4; j++)
		{
			if(j != i)
			{
				for(k = 1; k <=4; k++)
				{
					if(k != j && k != i)
					{
						printf("%d\n", i*100+j*10+k);
					}
					else
					{
						continue;
					}
				}
			}
			else
			{
				continue;
			}
		}
	}
	return 0;
}
