#include"demo_44_linklist线性表(单向链表)头文件.h"
#include<stdio.h>
//让万千世界包含node结点 

typedef struct _Teacher
{
	LinkListNode node;
	char name[32];
	int age;
}Teacher;

int main(void)
{
    LinkList* list = NULL;
	Teacher t1, t2, t3, t4, t5;
	t1.age = 31;
	t2.age = 32;
	t3.age = 33;
	t4.age = 34;
	t5.age = 35;
	
	list = LinkList_Creater();
	LinkList_Insert(list, (LinkListNode*)&t1, 0);
	LinkList_Insert(list, (LinkListNode*)&t2, 0);
	LinkList_Insert(list, (LinkListNode*)&t3, 0);
	LinkList_Insert(list, (LinkListNode*)&t4, 0);
	LinkList_Insert(list, (LinkListNode*)&t5, 3);		
	
	for(int i = 0; i < LinkList_Length(list); i++)
	{
		Teacher* tmp = (Teacher*)LinkList_Get(list, i);
		if(tmp == NULL)
		{
			return 0;
		}
		printf("age:%d\n", tmp->age);
	} 
	 
	while(LinkList_Length(list) > 0)
	{
		Teacher* tmp = (Teacher*)LinkList_Delete(list, 0);
		if(tmp == NULL)
		{
			return 0;
		}
		printf("age:%d\n", tmp->age);
	} 
	
	LinkList_Destroy(list);
	
	return 0;
}
