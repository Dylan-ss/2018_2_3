/*输入某年某月某日，判断这一天是这一年的第几天*/
 
#include <stdio.h>

int main()
{
	int year, month, day;
	int sum = 0;
	int flag;
month_1:
	printf("请输入年份：");
	scanf("%d", &year);
	printf("请输入月份：");
	scanf("%d", &month);
	printf("请输入日：");
	scanf("%d", &day);
	switch(month)
	{
	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31;
		break;
	case 3:
		sum = 59;
		break;
	case 4:
		sum = 90;
		break;
	case 5:
		sum = 120;
		break;
	case 6:
		sum = 151;
		break;
	case 7:
		sum = 181;
		break;
	case 8:
		sum = 212;
		break;
	case 9:
		sum = 243;
		break;
	case 10:
		sum = 273;
		break;
	case 11:
		sum = 304;
		break;
	case 12:
		sum = 334;
		break;
	default:
		printf("invalid month, input again\n");
		goto month_1;
	}
	sum = sum + day;
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	if(flag == 1 && month > 2)
		sum++;
	printf("%d-%d-%d距这一年第一天已经过去%d天。\n", year, month, day, sum);
	return 0;
}
