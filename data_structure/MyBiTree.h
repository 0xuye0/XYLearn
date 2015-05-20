#pragma once
struct BiNode {
	int data;
	BiNode *lch;
	BiNode *rch;
};
class CMyBiTree {
public:
    BiNode* root;
	CMyBiTree();
	CMyBiTree(int a[]);
    void PreOrder_n();
    void PreOrder();
    void InOrder_n();
    void InOrder();
    void PostOrder_n();
	void PostOrder();
	void LevelOrder();
	~CMyBiTree();
private:
	void Create(int a[], BiNode* &R, int i);
	void preorder(BiNode *R);
	void inorder(BiNode* R);
    void postorder(BiNode* R);
    void levelorder(BiNode* R);
};
