#include <iostream>
#include <vector>
#include "../../data_structure/MyBiTree.h"
using namespace std;

bool findpath(BiNode* root, vector<BiNode*>& path, int value) {
    if (root == NULL) {
        return false;
    }
    path.push_back(root);
    if (root->data == value) {
        return true;
    } else {
        if (findpath(root->lch, path, value)) {
            return true;
        } else {
            if (findpath(root->rch, path, value)) {
                return true;
            } else {
                path.pop_back();
                return false;
            }
        }
    }
}

int CommonParent(BiNode* root, int val1, int val2) {
    if (root == NULL) {
        return -1;
    }
    vector<BiNode*> path;
    vector<BiNode*> path1;
    if (!findpath(root, path, val1) || !findpath(root, path1,val2)) {
        return -1;
    }
    int i = 0;
    int j = 0;
    while (i < path.size() && j < path1.size()) {
        if (path[i] == path1[j]) {
            i++;
            j++;
        }
        else {
            return path[--i]->data;
        }
    }
    if (i == path.size()) {
        return path[--i]->data;
    }
    if (j == path1.size()) {
        return path1[--j]->data;
    }
    return -1;
}


int main() {
    int b[] = {1, 2, 3, 4, 5, 6, 0, 0, 0, 7,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CMyBiTree a = b;
    // vector<BiNode*> path;
    // findpath(a.root, path, 7);
    // for (unsigned int i = 0; i < path.size(); ++i) {
    //     cout << path[i]->data << " ";
    // }
    // cout << endl;
    // path.clear();

    // findpath(a.root, path, 6);
    // for (unsigned int i = 0; i < path.size(); ++i) {
    //     cout << path[i]->data << " ";
    // }
    // cout << endl;
    // path.clear();

    // findpath(a.root, path, 1);
    // for (unsigned int i = 0; i < path.size(); ++i) {
    //     cout << path[i]->data << " ";
    // }
    // cout << endl;
    // path.clear();

    // findpath(a.root, path, 0);
    // for (unsigned int i = 0; i < path.size(); ++i) {
    //     cout << path[i]->data << " ";
    // }
    // cout << endl;
    // path.clear();
    cout << CommonParent(a.root, 7, 6) << endl;
    return 0;
}
