//linklist线性表（单向链表）实现文件
#include"demo_44_linklist线性表(单向链表)头文件.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _tag_LinkList
{
	LinkListNode header;
	int length = 0;
}TLinkList;

LinkList* LinkList_Creater(void)
{
	TLinkList* tmp = NULL;
	tmp = (TLinkList*)malloc(sizeof(TLinkList));
	
	if(tmp == NULL)
	{
		printf("func LinkList_Create() err\n");
		return NULL;
	}
	
	memset(tmp, 0, sizeof(TLinkList));
	//上面这句相当于下面两句
	//tmp->length = 0;
	//tmp->header.next = NULL; 
	
	return tmp;
}  
void LinkList_Destroy(LinkList* list)
{
	if(list == NULL)
	{
		return;
	}
	free((TLinkList*)list);
	
	return;
}  
void LinkList_Clear(LinkList* list)
{
	TLinkList* tlist = NULL;
	tlist = (TLinkList*) list;
	
	if(tlist == NULL)
	{
		return;
	}
	
	tlist->header.next = NULL;
	tlist->length = 0;
	
	return;
}  
int LinkList_Length(LinkList* list)
{
	TLinkList* tlist = NULL;
	tlist = (TLinkList*) list;
	
	if(tlist == NULL)
	{
		return 0;
	}
	
	return tlist->length;
}  
int LinkList_Insert(LinkList* list, LinkListNode* node, int pos)
{
	int i;
	TLinkList* tlist = NULL;
	LinkListNode* current = NULL;
	
	if(list == NULL || node == NULL)
	{
		return -1;
	}
	
	tlist = (TLinkList*) list;
	if(pos < 0 || pos > tlist->length)
	{
		return -2;
	}
	
	current = &(tlist->header);
	for(i = 0; i < pos; i++)
	{
		current = current->next;
	}
	
	node->next = current->next;
	current->next = node;
	
	tlist->length++;
	
	return 0;
}  
LinkListNode* LinkList_Get(LinkList* list, int pos)
{
	int i;
	TLinkList* tlist = NULL;
	LinkListNode* current = NULL;
	
	if(list == NULL)
	{
		return NULL;
	}
	
	tlist = (TLinkList*) list;
	if(pos < 0 || pos >= tlist->length)
	{
		return NULL;
	}
	
	current = &(tlist->header);
	for(i = 0; i <= pos; i++)
	{
		current = current->next;
	}
	
	return current;
}  
LinkListNode* LinkList_Delete(LinkList* list, int pos)
{
	int i;
	TLinkList* tlist = NULL;
	LinkListNode* current = NULL;
	LinkListNode* tmp = NULL;
	
	if(list == NULL)
	{
		return NULL;
	}
	
	tlist = (TLinkList*) list;
	if(pos < 0 || pos >= tlist->length)
	{
		return NULL;
	}
	
	current = &(tlist->header);
	for(i = 0; i < pos; i++)
	{
		current = current->next;
	}
	
	tmp = current->next;
	current->next = tmp->next;
	
	tlist->length--;
	
	return tmp;
}  

