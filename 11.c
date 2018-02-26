/*A选手说：B第一，我第三。
B选手说：我第二，E第四。
C选手说：我第一，D第二。
D选手说：C最后，我第三。
E选手说：我第四，A第一。
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for(a = 1; a <= 5; a++)
	{
		for(b = 1; b <= 5; b++)
		{
			for(c = 1; c <= 5; c++)
			{
				for(d = 1; d <= 5; d++)
				{
					for(e = 1; e <= 5; e++)
					{
						if(((b == 1) + (a == 3)) == 1 && ((b == 2) + (e == 4)) == 1 \
								&& ((c == 1) + (d == 2)) == 1 && ((c == 5) + (d == 3)) == 1 && \
								((e == 4) + (a == 1)) == 1)
							printf("A:%d, B:%d, C:%d, D:%d, E:%d\n", a,b,c,d,e);
					}
				}
			}
		}
	}
	return 0;
}
