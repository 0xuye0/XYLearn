#pragma once
#include <iostream>
using namespace std;
class CMyCircleList
{
public:
	struct Node
	{
		int data;
		Node* next;
	};
	CMyCircleList();
	CMyCircleList(CMyCircleList &t){ cout << "copy" << endl; }
	CMyCircleList(int a[], int n);
	~CMyCircleList();
	void Print();
	int GetIndex(int key);
	int GetValue(int index);
	void Insert(int i, int key);
	int Delete(int i = 5);
	int GetLength();
	void Reverse();
	void Link(CMyCircleList &b);
private:
	Node* rear;
};

