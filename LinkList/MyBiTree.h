#pragma once
class CMyBiTree
{
public:
	struct BiNode;
private:
	void Create(int a[], BiNode* &R, int i);

public:
	struct BiNode
	{
		int data;
		BiNode *lch;
		BiNode *rch;
	}*root;
	CMyBiTree();
	CMyBiTree(int a[]);
	void PreOrder(BiNode *R);
	void InOrder(BiNode* R);
	void PostOrder(BiNode* R);
	void LevelOrder(BiNode* R);
	~CMyBiTree();

};

