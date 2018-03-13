/*请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母*/
/*1.Monday 2.Tuesday 3.Wednesday 4.Thursday 5.Friday 6.Saturday 7.Sunday*/
#include <stdio.h>

int main()
{
	char letter;
	printf("Please input the first letter of someday:");
	while((letter = getchar()) != 'Y')
	{
		switch(letter)
		{
		case 'm':
			getchar();
			printf("Monday\n");
			break;
		case 't':
			printf("Please input the second letter:");
			if((letter = getchar()) == 'u')
				printf("Tuesday\n");
			else if(letter == 'h')
				printf("Thursday\n");
			else
				printf("error\n");
			break;
		case 'w':
			printf("Wednesday\n");
			break;
		case 'f':
			printf("Friday\n");
			break;
		case 's':
			printf("Please input the second letter:");
			if((letter = getchar()) == 'a')
				printf("Saturday\n");
			else if(letter == 'u')
				printf("Sunday\n");
			else
				printf("error\n");
			break;
		default:
			printf("error\n");
			break;
		}
	}
	return 0;
}


