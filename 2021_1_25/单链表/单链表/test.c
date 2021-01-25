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



// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x);
// �������ӡ
void SListPrint(SListNode* plist);
// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x);
// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x);
// �������βɾ
void SListPopBack(SListNode** pplist);
// ������ͷɾ
void SListPopFront(SListNode** pplist);
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x);//ɶ��˼��
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);
// �����������
void SListDestory(SListNode** plist);
void SListInit(SListNode** ppFirst)//��ʼ��
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
		printf("�ձ��޷���ӡ!\n");
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
	if (*pplist == NULL) {//��һ���ڵ�
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

void SListInsertAfter(SListNode* pos, SLTDateType x)//û����...............
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