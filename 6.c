/*有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node						//定义一个数据结构体
{
	int month;
	int data;
	struct node *next;
}*nodelist;

nodelist create_list()					//创建一个链表
{
	nodelist H;
	H = malloc(sizeof(struct node));
	if(H == NULL)
	{
		perror("malloc");
		return NULL;
	}
	H->month = 0;
	H->data = 0;
	H->next = NULL;
	return H;
}

void insert_tail_list(nodelist H, int month, int value)	//在尾部插入一个节点	
{
	nodelist p, q;
	p = H;
	while(p->next)
	{
		p = p->next;
	}
	q = malloc(sizeof(struct node));
	if(q == NULL)
	{
		perror("malloc");
		exit(1);
	}
	q->data = value;
	q->month = month;
	q->next = p->next;
	p->next = q;
}

int locate_list(nodelist H, int month)			//根据月份找到节点位置
{
	nodelist p;
	p = H;
	do
	{
		p = p->next;
		if(p->month == month)
			break;

	}while(p->next);
	if(p->month != month)
	{
		printf("invalid month\n");
		return -1;
	}
	else
	{
		return p->data;
	}
	return 0;
}

void show_list(nodelist H)
{
	nodelist p;
	p = H;
	while(p->next)
	{
		printf("第%d个月：%d\t", p->next->month, p->next->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	int i;
	nodelist H;
	H = create_list();
	insert_tail_list(H, 1, 1);
	insert_tail_list(H, 2, 1);
	for(i = 3; i <= 50; i++)
	{
		insert_tail_list(H, i, (locate_list(H, i - 1) + locate_list(H, i - 2))); 
	}
	show_list(H);
	printf("请输入月份：");
	scanf("%d", &i);
	printf("该月份的兔子为：%d只\n", locate_list(H, i));
	return 0;
}
