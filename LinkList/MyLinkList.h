#pragma once
class CMyLinkList
{
public:
	struct Node
	{
		int data;
		Node* next;
	};
	CMyLinkList();
	CMyLinkList(int a[], int n);
	~CMyLinkList();
	void Print();
	int GetIndex(int key);
	int GetValue(int index);
	void Insert(int i, int key);
	int Delete(int i=5);
	int GetLength();
	void reverse();
private:
	Node* head;
};

