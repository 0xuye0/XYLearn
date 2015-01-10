#pragma once
class CMyBiTree {
public:
	CMyBiTree();
	CMyBiTree(int a[]);
    void PreOrder();
    void InOrder();
	void PostOrder();
	void LevelOrder();
	~CMyBiTree();
private:
	struct BiNode {
		int data;
		BiNode *lch;
		BiNode *rch;
	} *root;
	void Create(int a[], BiNode* &R, int i);
	void preorder(BiNode *R);
	void inorder(BiNode* R);
    void postorder(BiNode* R);
    void levelorder(BiNode* R);
};
