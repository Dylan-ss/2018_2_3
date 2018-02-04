/*输入三个数，由小到大输出*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int temp;
	if(*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main()
{
	int x, y, z;
	printf("please input first value:");
	scanf("%d", &x);
	printf("please input second value:");
	scanf("%d", &y);
	printf("please input third value:");
	scanf("%d", &z);
	swap(&x, &y);
	swap(&x, &z);
	swap(&y, &z);
	printf("%d<%d<%d\n", x, y, z);
	return 0;
}
