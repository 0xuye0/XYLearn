#include "MyBiTree.h"
#include <iostream>
using namespace std;
CMyBiTree::CMyBiTree() {
}

CMyBiTree::CMyBiTree(int a[]) {
	root = NULL;
	Create(a, root, 0);
}

CMyBiTree::~CMyBiTree() {
}

void CMyBiTree::Create(int a[], BiNode* &R, int i) {
	if (a[i] != 0) {
		R = new BiNode;
		R->data = a[i];
		R->lch = NULL;
		R->rch = NULL;
		Create(a, R->lch, 2 * i + 1);
		Create(a, R->rch, 2 * i + 2);
	}
}

void CMyBiTree::PreOrder() {
    preorder(this->root);
}

void CMyBiTree::preorder(BiNode* R) {
	if (R != NULL) {
		cout << R->data;
		preorder(R->lch);
		preorder(R->rch);
	}
}

void CMyBiTree::InOrder() {
    inorder(this->root);
}

void CMyBiTree::inorder(BiNode* R) {
    if (R != NULL) {
        inorder(R->lch);
        cout << R->data;
        inorder(R->rch);
    }
}
