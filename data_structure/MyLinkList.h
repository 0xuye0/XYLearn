#pragma once
class CMyLinkList {
public:
    CMyLinkList();
    CMyLinkList(int a[], int n);
    ~CMyLinkList();
    void Print();
    int GetIndex(int key);
    int GetValue(int index);
    void Insert(int i, int key);
    int Delete(int);
    int GetLength();
    void reverse();
private:
    struct Node {
        int data;
        Node* next;
    } *head;
};

