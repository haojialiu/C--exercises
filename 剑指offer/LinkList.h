#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node
{
	int data;

	struct Node *next;

}Node;

typedef struct LinkList
{
	struct Node head;

	int count;

}LinkList, *pList;

static Node *BuyNode(int val, Node *next)
{
	Node *s = (Node *)malloc(sizeof(Node));

	assert(s != NULL);

	s->data = val;

	s->next = next;

	return s;
}

void InitLinkList(pList list)
{
	list->count = 0;

	list->head.next = NULL;
}

void InsertElemToList(pList list, int val, int pos)
{
	if (pos < 0 || pos > list->count)
	{
		printf("insert pos is error\n");

		return;
	}

	Node *p = &list->head;

	while (pos > 0)
	{
		p = p->next;
		pos--;
	}

	Node *s = BuyNode(val, p->next);

	p->next = s;

	list->count++;
}

void DeleteElemOfList(pList list, int pos)
{
	if (pos < 1 || pos > list->count)
	{
		printf("delete pos is error\n");

		return;
	}

	Node *p = &list->head;

	while (pos > 1)
	{
		p = p->next;

		pos--;
	}

	Node *q = p->next;

	p->next = q->next;

	free(q);

	list->count--;
}

void ShowElemOfList(pList list)
{
	assert(list != NULL);

	Node *p = list->head.next;

	while (p != NULL)
	{
		printf("%d  ", p->data);

		p = p->next;
	}
	printf("\n");
}