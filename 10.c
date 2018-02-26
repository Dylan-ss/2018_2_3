/*s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a, n;
	printf("input a:");
	scanf("%d", &a);
	printf("input n:");
	scanf("%d", &n);
	int count = 0, sum = 0, an = 0;
	while(count < n)
	{
		an += a;
		sum += an;
		a *= 10;
		count++;
	}
	printf("a+aa+aaa+...+a = %d\n", sum);

	return 0;
}
