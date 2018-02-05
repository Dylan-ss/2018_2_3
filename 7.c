/* s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, count;
	long int sum;
	long int temp;
	printf(" 请输入数字：");
	scanf("%d", &a);
	printf(" 请输入个数：");
	scanf("%d", &b);
	sum = 0;
	temp = (long int)a;
	for(count = 1; count <= b; count++)
	{
		sum += temp;
		temp = temp * 10 + (long int)a;
	}
	printf(" 和为：%ld\n", sum);
	return 0;
}
