//linklist线性表（单向链表）头文件
#ifndef __MY_LINKLIST_H__
#define __MY_LINKLIST_H__
 
typedef void LinkList;
typedef struct _tag_LinkListNode
{
	struct _tag_LinkListNode* next;
}LinkListNode;

LinkList* LinkList_Creater(void);  
void LinkList_Destroy(LinkList* list);
void LinkList_Clear(LinkList* list);
int LinkList_Length(LinkList* list);
int LinkList_Insert(LinkList* list, LinkListNode* node, int pos);
LinkListNode* LinkList_Get(LinkList* list, int pos);
LinkListNode* LinkList_Delete(LinkList* list, int pos);

#endif
