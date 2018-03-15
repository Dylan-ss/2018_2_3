/*求1+2!+3!+...+20!的和*/

#include <stdio.h>

int jiecheng(int i);

int main()
{
	int sum, i, j;
	printf("Input a number:");
	scanf("%d", &i);
	for(sum = 0, j = 1; j <= i; j++)
	{
		sum += jiecheng(j);
	}
	printf("sum:%d\n", sum);
	return 0;
}

int jiecheng(int i)
{
		int j;
	if(i == 0)
		j = 1;
	else
		j = i * jiecheng(i - 1);
	return j;
}