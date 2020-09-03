#include"demo_43_seqlist线性表(顺序存储)头文件.h"  //先查本文件所在目录下 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _tag_SeqList
{
	int capacity;
	int length;
	int **node;  //也科int *node; 
}TSeqList;

//创建线性表，用数组模拟 
SeqList* SeqList_Creater(int capacity)
{
	int ret;
	TSeqList* tmp = NULL;
	tmp = (TSeqList *)malloc(sizeof(TSeqList) * capacity);
	if(tmp == NULL)
	{
		ret = 1;
		printf("func SeqList_Create() err:%d\n", ret);
		return NULL;
	} 
	memset(tmp, 0, sizeof(TSeqList));
	tmp->capacity = capacity; 
	tmp->length = 0;
	tmp->node = (int**)malloc(sizeof(void*) * capacity);
	//若上面些int *node则这里可以写tmp->node = (int*)malloc(sizeof(void*) * capacity);
	
	return tmp;
}

//创建线性表2，用数组模拟 
int SeqList_Creater2(int capacity, SeqList**handle)
{
	int ret = 0;
	TSeqList* tmp = NULL;
	tmp = (TSeqList *)malloc(sizeof(TSeqList) * capacity);
	if(ret == NULL)
	{
		ret = 1;
		printf("func SeqList_Create() err:%d\n", ret);
		return ret;
	} 
	memset(tmp, 0, sizeof(TSeqList));
	tmp->capacity = capacity; 
	tmp->length = 0;
	tmp->node = (int**)malloc(sizeof(void*) * capacity);
	//若上面些int *node则这里可以写tmp->node = (int*)malloc(sizeof(void*) * capacity);
	 
	if(tmp == NULL)
	{
		ret = 2;
		printf("func SeqList_Create() err:%d\n", ret);
		return ret;
	} 
	
	*handle = tmp;
	
	return ret;
}

//销毁线性表
void SeqList_Destroy(SeqList* list)
{
	if(list == NULL)
	{
		return;
	}
	TSeqList* tmp = (TSeqList*)list;
	if(tmp->node != NULL)
	{
		free(tmp->node);
	}
	free(tmp);
	
	return;
}

//清除线性表 
void SeqList_Clear(SeqList* list)
{
	if(list == NULL)
	{
		return;
	}
	TSeqList* tmp = (TSeqList*)list;

	tmp->length = 0;
	memset(tmp->node, 0, tmp->capacity * sizeof(void*));
	
	return;
}

//线性表长度 
int SeqList_Length(SeqList* list)
{
	if(list == NULL)
	{
		return -1;
	}
	TSeqList* tmp = (TSeqList*)list;

	return tmp->length;
}

//线性表容量 
int SeqList_Capacity(SeqList* list)
{
	if(list == NULL)
	{
		return -1;
	}
	TSeqList* tmp = (TSeqList*)list;

	return tmp->capacity;
}

//插入元素 
int SeqList_Insert(SeqList* list, SeqListNode* node, int pos)
{
	if(list == NULL || node == NULL)
	{
		return -1;
	}
	int i;
	TSeqList* tmp = (TSeqList*)list;
	if(tmp->length >= tmp->capacity)
	{
		return -2;
	}
	if(pos > tmp->length)
	{
		pos = tmp->length;
	}
	if(pos < 0)
	{
		pos = 0;
	}
	
	for(i = tmp->length; i > pos; i--)
	{
		tmp->node[i] = tmp->node[i-1];
	}
	tmp->node[i] = (int*)node;
	tmp->length++;
	
	return 0;
}

//获取元素 
SeqListNode* SeqList_Get(SeqList* list, int pos)
{
    TSeqList* tmp = (TSeqList*)list;
	SeqListNode* ret = tmp->node[pos];
	
	if(list == NULL || pos < 0 || pos >= tmp->length)
	{
		return NULL;
	}

	return ret;
}

//删除元素 
SeqListNode* SeqList_Delete(SeqList* list, int pos)
{
	int i;
	TSeqList* tmp = (TSeqList*)list;
	SeqListNode* ret = tmp->node[pos];

	if(list == NULL || pos < 0 || pos >= tmp->length)
	{
		return NULL;
	}
	
	for(i = pos + 1; i < tmp->length; i++)
	{
		tmp->node[i - 1] = tmp->node[i];
	}
	tmp->length--;
	
	return ret;
}

