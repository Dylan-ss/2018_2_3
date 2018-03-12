/*将一个正整数分解质因数*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int n, i;
	printf("Input a number:");
	scanf("%d", &n);
	printf("%d=", n);
	for(i = 2; i <= n; i++)
	{
		while(n != i)
		{
			if(n % i == 0)
			{
				printf("%d*", i);
				n = n/i;
			}
			else 
				break;
		}
	}
	printf("%d", n);
	return 0;
}
