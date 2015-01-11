#include "MyList.h"
#include "MyLinkList.h"
#include "MyCircleList.h"
#include "MyBiTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
//    int a[] = { 1 ,2,3,4,5};
//    int b[] = { 7, 8, 9, 10 };
//    CMyCircleList list1(a, sizeof(a) / sizeof(int));
//    list1.Print();
//    //cout << list1.GetLength() << endl;
//    CMyCircleList list2(b, sizeof(b) / sizeof(int));
//    list1.Link(list2);
//    //list1.Print();
//    //list1.Insert(6, 10);
//    //list1.Print();
//    //cout << list1.GetLength() << endl;
//
//    //cout << list1.Delete(1) << endl;
//    //cout << list1.GetLength() << endl;
//    //list1.Print();
//    list1.Reverse();
//    list1.Print();
//    cout << list1.GetLength() << endl;
//    list2.Print();
//    cout << list2.GetLength() << endl;
//    /*cout << list1.GetLength() << endl;
//    list1.Insert(2, 10);
//    list1.Print();
//    list1.Delete(1);
//    list1.Print();
//    cout << list1.GetLength() << endl;
//    list1.reverse();
//    list1.Print();*/
    int b[] = {  1, 2, 3, 4, 5, 6, 0, 0, 0, 7,0,0,0,0,0,0,0,0,0,0,0};
    CMyBiTree tree1 = b;
    cout << "PreOrder_n:" << endl;
    tree1.PreOrder_n();
    cout << endl << "PreOrder:" << endl;
    tree1.PreOrder();
    cout << endl << "InOrder_n:" << endl;
    tree1.InOrder_n();
    cout << endl << "InOrder:" << endl;
    tree1.InOrder();
    cout << endl << "PostOrder:" << endl;
    tree1.PostOrder();
    cout << endl << "PostOrder_n:" << endl;
    tree1.PostOrder_n();
    cout << endl;



    int a[] = { 1, 2, 3, 4, 5};
    CMyList list1(a, sizeof(a) / sizeof(int));
    list1.Insert(0,0);
    list1.Delete(2);
    list1.Print();
    // list1.Joseph(1);
    return 0;
}
