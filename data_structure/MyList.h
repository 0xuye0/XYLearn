#pragma once
const int MAXSIZE = 100;
class CMyList {
public:
	CMyList(){ length = 0; }
	CMyList(const int a[], int n);
	~CMyList();
	void Print();
	int GetIndex(int key);
	int GetValue(int index);
	void Insert(int i, int key);
	int Delete(int i);
	int GetLength(){return length;}
	// void Joseph(int i);
private:
	int data[MAXSIZE];
	int length;
};
