#include "MyList.h"
#include "MyLinkList.h"
#include "MyCircleList.h"
#include "MyBiTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void main()
{
//	int a[] = { 1 ,2,3,4,5};
//	int b[] = { 7, 8, 9, 10 };
//	CMyCircleList list1(a, sizeof(a) / sizeof(int));
//	list1.Print();
//	//cout << list1.GetLength() << endl;
//	CMyCircleList list2(b, sizeof(b) / sizeof(int));
//	list1.Link(list2);
//	//list1.Print();
//	//list1.Insert(6, 10);
//	//list1.Print();
//	//cout << list1.GetLength() << endl;
//
//	//cout << list1.Delete(1) << endl;
//	//cout << list1.GetLength() << endl;
//	//list1.Print();
//	list1.Reverse();
//	list1.Print();
//	cout << list1.GetLength() << endl;
//	list2.Print();
//	cout << list2.GetLength() << endl;
//	/*cout << list1.GetLength() << endl;
//	list1.Insert(2, 10);
//	list1.Print();
//	list1.Delete(1);
//	list1.Print();
//	cout << list1.GetLength() << endl;
//	list1.reverse();
//	list1.Print();*/
	//int a[] = {  1, 2, 3, 4, 5, 6, 0, 0, 0, 7,0,0,0,0,0,0,0,0,0,0,0};
	//CMyBiTree tree1 = a;
	//tree1.PreOrder(tree1.root);
	
	//char tt[] = "a.txt";
	//ifstream at(tt);
	//
	//while (at.good())
	//{
	//	string b; 
	//	//at >> b;
	//	
	//	getline(at, b);
	//	/*char b;
	//	at.get(b);*/
	//	cout << b << "@" << endl;
	//	ios::pos_type a = at.tellg();
	//	at.seekg(a+ios::pos_type(3));
	//	cout << a << endl;
	//	
	//	
	//	/*cout << at.beg << endl;
	//	cout << at.cur << endl;
	//	cout << at.end << endl;
	//	cout << at.eof() << endl;*/
	//}
	//cout << sizeof(ios::pos_type) << endl;



	int a[] = { 1, 2, 3, 4, 5};
	CMyList list1(a, sizeof(a) / sizeof(int));
	list1.Print();
	list1.Joseph(1);
	system("pause");
}