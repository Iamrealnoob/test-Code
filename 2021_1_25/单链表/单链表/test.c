#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


// slist.h
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;



// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x);
// 单链表打印
void SListPrint(SListNode* plist);
// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x);
// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x);
// 单链表的尾删
void SListPopBack(SListNode** pplist);
// 单链表头删
void SListPopFront(SListNode** pplist);
// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x);//啥意思？
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);
// 单链表的销毁
void SListDestory(SListNode** plist);
void SListInit(SListNode** ppFirst)//初始化
{
	assert(ppFirst != NULL);
	*ppFirst = NULL;
}

SListNode* BuySListNode(SLTDateType x) 
{
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	return s;
}

void SListPrint(SListNode* plist)
{
	if (plist == NULL) {
		printf("空表，无法打印!\n");
		return;
	}
	while (plist != NULL) {
		printf("%d-->", plist->data);
			plist = plist->next;
	}
	printf("NULL");
}
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* s = BuySListNode(x);
	assert(s != NULL);
	if (*pplist == NULL) {//第一个节点
		*pplist = s;
	}
	else {
		SListNode* p = *pplist;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = s;
	}
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* s = BuySListNode(x);
	assert(s != NULL);
	if (*pplist == NULL) {
		*pplist = s;
	}
	else {
		s->next = *pplist;
		*pplist = s;
	}

}

void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
		return;
	SListNode* p = *pplist;
	SListNode* q = NULL;
	if (p->next == NULL) {
		free(p);
		*pplist = NULL;
	}
	else {
		while (p->next != NULL) {
			q = p;
			p = p->next;
		}
		free(p);
		p = NULL;
		q->next = NULL;
	}
}

void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
		return;
	SListNode* p = *pplist;
	//SListNode* q = NULL;
	if (p->next == NULL) {
		free(p);
		*pplist = NULL;
	}
	else {
		*pplist = p->next;
		free(p);
		p = NULL;
	}
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* p = plist;
	while (plist != NULL ) {
		if (p->data == x)
			return p;

		p = p->next;
	}
	return NULL;
}

void SListInsertAfter(SListNode* pos, SLTDateType x)//没看懂...............
{
	assert(pos);
	SListNode* new = BuySListNode(x);

}

void SListDestory(SListNode** plist)
{
	SListNode* p = *plist;
	while (p != NULL) {
		*plist = p->next;
		free(p);
		p = *plist;
	}
}

int main()
{
	SListNode* mylist;
	SListInit(&mylist);
	SListPushBack(&mylist, 8);
	SListPushBack(&mylist, 25);
	SListPushBack(&mylist, 6);
	SListPushBack(&mylist, 9);
	SListPushFront(&mylist, 17);
	SListPushFront(&mylist, 27);
	SListPushFront(&mylist, 57);
	SListPushFront(&mylist, 5967);
	SListPrint(mylist);
	printf("\n______________________________________\n");
	SListPopBack(&mylist);
	SListPopBack(&mylist);
	SListPopFront(&mylist);
	SListPopFront(&mylist);
	SListPopFront(&mylist);
	SListPrint(mylist);
	SListDestory(&mylist);
	return 0;
}