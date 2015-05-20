#include "MyBiTree.h"
#include <iostream>
#include <stack>
#include <utility>
using namespace std;
CMyBiTree::CMyBiTree() {
    root = NULL;
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

void CMyBiTree::PreOrder_n() {
    stack<BiNode*> s;
    BiNode* r = root;
    while (r != NULL || !s.empty()) {
        while (r != NULL) {
            cout << r->data;
            s.push(r);
            r = r->lch;
        }
        if (!s.empty()) {
            r = s.top();
            s.pop();
            r = r->rch;
        }
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

void CMyBiTree::InOrder_n() {
    stack<BiNode*> s;
    BiNode* r = root;
    while (r != NULL || !s.empty()) {
        while (r != NULL) {
            s.push(r);
            r = r->lch;
        }
        if (!s.empty()) {
            r = s.top();
            s.pop();
            cout << r->data;
            r = r->rch;
        }
    }
}

void CMyBiTree::PostOrder() {
    postorder(this->root);
}

void CMyBiTree::postorder(BiNode* p) {
    if (p) {
        postorder(p->lch);
        postorder(p->rch);
        cout << p->data;
    }
}
void CMyBiTree::PostOrder_n() {
    stack<pair<BiNode*, int> > s;
    BiNode* r = root;
    while (r != NULL || !s.empty()) {
        while (r != NULL) {
            s.push(make_pair(r,0));
            r = r->lch;
        }
        if (!s.empty()) {
            pair<BiNode*, int> p = s.top();
            if (p.second == 0) {
                r = (p.first)->rch;
                p.second = 1;
                s.pop();
                s.push(p);
            } else {
                cout << (p.first)->data;
                s.pop();
            }
        }
    }
}


