/*10个小朋友围坐一圈分糖果，大家按照顺时针的方向从1报数到99，每次报到几就能领到几个糖果，问最终哪个小朋友分到的糖果最多*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int *pbuf = malloc(10 * sizeof(int));
	int *pcur = pbuf;
	int count = 0;
	memset(pbuf, 0, 10 * sizeof(int));
	while(++count)
	{
		if(count > 99)
		{
			break;
		}
		*pcur += count;
		pcur++;

		if(pcur - pbuf > 9)
		{
			pcur = pbuf;
		}
	}
	for(count = 0; count < 10; count++)
	{
		printf("Child %2d : %d\n", count + 1, pbuf[count]);
	}
	free(pbuf);
	return 0;
}
