#include "MyCircleList.h"
#include <iostream>
using namespace std;

CMyCircleList::CMyCircleList()
{
	rear = new Node;
	rear->next = rear;
}
CMyCircleList::CMyCircleList(int a[],int n)
{
	rear = new Node;
	rear->next = rear;
	for (int j = n - 1; j >= 0; j--)
	{
		Node *p = new Node;
		p->data = a[j];
		p->next = rear->next;
		rear->next = p;
	}
}


CMyCircleList::~CMyCircleList()
{
}

void CMyCircleList::Print()
{
	Node* p = rear->next	;
	while (p != rear)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
void CMyCircleList::Link(CMyCircleList &b)
{
	Node* p = b.rear->next;
	b.rear->next = this->rear->next;
	rear->next = p->next;
	rear->data = p->data;
	rear = b.rear;
	delete p;
}
int CMyCircleList::GetLength()
{
	int j = 0;
	Node* p = rear->next;
	while (p != rear)
	{
		j++;
		p = p->next;
	}
	return j;
}

void CMyCircleList::Insert(int i, int key)
{
	Node *p = rear;
	int j = 0;
	while (j != i-1 && p->next != rear)
	{
		p = p->next;
		j++;
	}
	if (j==i-1)
	{
		Node* q = new Node;
		q->data = key;
		q->next = p->next;
		p->next = q;
	}
	else
		throw "wrong place!";
}
int CMyCircleList::GetIndex(int key)
{
	Node *p = rear->next;
	int j = 1;
	while (p != rear)
	{
		if (p->data == key)
			return j;
		p = p->next;
		j++;
	}
	return 0;
}

int CMyCircleList::GetValue(int index)
{
	Node* p = rear->next	;
	int j = 1;
	while (j != index && p != rear)
	{
		p = p->next;
		j++;
	}
	if (j != index) throw "wrong place";
	else
	{
		return p->data;
	}
}

int CMyCircleList::Delete(int i)
{
	Node *p = rear;
	int j = 0;
	while (j != i-1 && p->next != rear)
	{
		p = p->next;
		j++;
	}
	if (j == i - 1)
	{
		Node* q = p->next;
		p->next = q->next;
		int x = q->data;
		delete q;
		return x;
	}
	else throw "wrong";
}

void CMyCircleList::Reverse()
{
	Node *p = rear;
	Node *q = rear->next;
	while (q != rear)
	{
		Node *t = q->next;
		q->next = p;
		p = q;
		q = t;
	}
	q->next = p;
}