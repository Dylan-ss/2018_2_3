/*利用条件运算符的嵌套来完成此题：学习成绩>=9分的同学用A表示89分之间的用B表示，60分以下的用C表示*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	char grade;
	while(1)
	{
		printf("input a score:");
		scanf("%d", &score);
		getchar();
		grade = (score >= 90) ? 'A' : ( score >= 60 ? 'B' : 'C');
		printf("Your socre is %c\n", grade);
	}
	return 0;
}
