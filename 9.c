/*输入一行字符，分别统计出其中的英文字母、空格、数字和其他字符的个数*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, const char *argv[])
{
	char c;
	char a[200];
	int i;
	bzero(a, 200);
	int letter = 0, space = 0, digi = 0, other = 0;
	printf("Please input some characters:");
	i = 0;
	while((c = getchar()) != '\n')
	{
		a[i] = c;
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letter++;
		else if(c == ' ')
			space++;
		else if(c >= '0' && c <= '9')
			digi++;
		else
			other++;
		i++;
	}
	printf("your line:%s\n", a);
	printf("letter = %d, space = %d, digi = %d, other = %d.\n", letter, space, digi, other);
	return 0;
}
