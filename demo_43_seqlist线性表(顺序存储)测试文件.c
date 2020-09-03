#include"demo_43_seqlist线性表(顺序存储)头文件.h"  //先查本文件所在目录下 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _Teacher
{
	char name[32];
	int age;
}Teacher;

int main(void)
{
	int ret = 0;
	SeqList* list;
	Teacher t1, t2, t3;
	t1.age = 30;
	t2.age = 31;
	t3.age = 32;
	
	//创建线性表 
    list = SeqList_Creater(10); 
	
	//插入元素 
	SeqList_Insert(list, (SeqList*)&t1, 0);  //头插法
	SeqList_Insert(list, (SeqList*)&t2, 0);
	SeqList_Insert(list, (SeqList*)&t3, 0); 
	
	//遍历线性表 
	for(int i = 0; i < SeqList_Length(list); i++)
	{
		Teacher* tmp = (Teacher*)SeqList_Get(list,  i);
		if(tmp == NULL)       
		{                     
			printf("func Se SeqList_Get() err:%d", ret);
			continue;
		}
		printf("age:%d\n", tmp->age); 
	} 
	 
	//销毁线性表 
	while(SeqList_Length(list) > 0)
	{
		Teacher* tmp = (Teacher*)SeqList_Delete(list, 0);
		if(tmp == NULL)
		{
			printf("fst_Delete() err:%d", ret);
			continue;
		}         
		printf("age:%d\n", tmp->age); 	
	}          
	           
    SeqList_Destroy(list);         

	return 0;
}
