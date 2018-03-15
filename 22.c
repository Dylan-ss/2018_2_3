/*利用递归方法求5!*/

#include <stdio.h>

int sum(int i);

int main()
{
	int i;
	printf("Input a number:");
	scanf("%d", &i);
	printf("sum:%d\n", sum(i));
	return 0;
}

int sum(int i)
{
	int j;
	if(i == 0)
		j = 1;
	else
		j = i * sum(i - 1);
	return j;
}