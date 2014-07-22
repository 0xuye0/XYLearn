#include "MyLinkList.h"
#include <iostream>
using namespace std;


CMyLinkList::CMyLinkList()
{
	head = new Node;
	head->next = NULL;
}
CMyLinkList::CMyLinkList(int a[], int n)
{
	head = new Node;
	head->next = NULL;
	for (int i = n-1; i >=0; i--)
	{
		Node* p = new Node;
		p->data = a[i];
		p->next = head->next	;
		head->next = p;
	}
}


CMyLinkList::~CMyLinkList()
{
}

void CMyLinkList::Print()
{
	Node* p = head->next;
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

int CMyLinkList::GetIndex(int key)
{
	Node* p = head->next;
	int j = 1;
	while (p)
	{
		if (p->data == key)
			return j;
		j++;
		p = p->next;
	}
	return 0;
}

int CMyLinkList::GetValue(int index)
{
	if (index < 1) throw "wrong!";
	int j = 1;
	Node* p = head->next;
	while (p&&j != index)
	{
		p = p->next;
		j++;
	}
	if (p == NULL) throw "wrong!";
	else
		return p->data;
}
void CMyLinkList::Insert(int i, int key)
{
	
	Node *q = head;
	int j = 0;
	while (q&&j != i-1)
	{
		q = q->next;
		j++;
	}
	if (j!=i-1) throw "wrong";
	else
	{
		Node *p = new Node;
		p->data = key;
		p->next = q->next;
		q->next = p;
	}
}

int CMyLinkList::Delete(int i)
{
	int j = 0;
	Node* p = head;
	while (p&&j != i-1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL) throw "wrong";
	else
	{
		Node* q = p->next;
		p->next = q->next;
		int at = q->data;
		delete q;
		return at;
	}
}

int CMyLinkList::GetLength()
{
	Node* p = head->next;
	int j = 0;
	while (p)
	{
		p = p->next;
		j++;
	}
	return j;
}
void CMyLinkList::reverse()
{
	Node *p = head->next	;
	Node *t = NULL;
	while (p != NULL)
	{
		Node *temp = p->next;
		p->next = t;
		t = p;
		p = temp;
	}
	head->next = t;
}