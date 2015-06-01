#include <iostream>
#include "algorithm/sort/sort.h"
#include "algorithm/search/search.h"
using namespace std;
int main() {
    int a[] = {1, 3, 5, 7, 4, 2, 1, 5, 8, 10, 12,
        6, 9, 6, 3, 12};
    int len = sizeof(a) / sizeof(int);

    QSort(a, len);
    cout << "QSort:    ";
    for (int i = 0; i < len; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    int b[] = {1, 3, 5, 7, 4, 2, 1, 5, 8, 10, 12,
        6, 9, 6, 3, 12};
    cout << "MergeSort:";
    MergeSort(b, len);
    for (int i = 0; i < len; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;


    int c[] = {1, 3, 5, 7, 4, 2, 1, 5, 8, 10, 12,
        6, 9, 6, 3, 12};
    cout << "HeapSort: ";
    MergeSort(c, len);
    for (int i = 0; i < len; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    cout << "binary search result:" << endl;
    int s1 = BSearch(a, len, 1);
    int s2 = BSearch(a, len, 2);
    int s3 = BSearch(a, len, 3);
    int s4 = BSearch(a, len, 4);
    int s5 = BSearch(a, len, 5);
    int s6 = BSearch(a, len, 6);
    int s7 = BSearch(a, len, 7);
    int s8 = BSearch(a, len, 8);
    int s9 = BSearch(a, len, 9);
    int s10 = BSearch(a, len, 0);
    cout << "1:" << s1 << " " << endl;
    cout << "2:" << s2 << " " << endl;
    cout << "3:" << s3 << " " << endl;
    cout << "4:" << s4 << " " << endl;
    cout << "5:" << s5 << " " << endl;
    cout << "6:" << s6 << " " << endl;
    cout << "7:" << s7 << " " << endl;
    cout << "8:" << s8 << " " << endl;
    cout << "9:" << s9 << " " << endl;
    cout << "10:" << s10 << " " << endl;


    cout << "bsearch_lower_bound result:" << endl;
    int ls1 = BSearch_lowerbound(a, len, 1);
    int ls2 = BSearch_lowerbound(a, len, 2);
    int ls3 = BSearch_lowerbound(a, len, 3);
    int ls4 = BSearch_lowerbound(a, len, 4);
    int ls5 = BSearch_lowerbound(a, len, 5);
    int ls6 = BSearch_lowerbound(a, len, 6);
    int ls7 = BSearch_lowerbound(a, len, 7);
    int ls8 = BSearch_lowerbound(a, len, 8);
    int ls9 = BSearch_lowerbound(a, len, 9);
    int ls10 = BSearch_lowerbound(a, len, 0);
    cout << "1:" << ls1 << " " << endl;
    cout << "2:" << ls2 << " " << endl;
    cout << "3:" << ls3 << " " << endl;
    cout << "4:" << ls4 << " " << endl;
    cout << "5:" << ls5 << " " << endl;
    cout << "6:" << ls6 << " " << endl;
    cout << "7:" << ls7 << " " << endl;
    cout << "8:" << ls8 << " " << endl;
    cout << "9:" << ls9 << " " << endl;
    cout << "10:" << ls10 << " " << endl;

    cout << "bsearch_upper_bound result:" << endl;
    int us1 = BSearch_upperbound(a, len, 1);
    int us2 = BSearch_upperbound(a, len, 2);
    int us3 = BSearch_upperbound(a, len, 3);
    int us4 = BSearch_upperbound(a, len, 4);
    int us5 = BSearch_upperbound(a, len, 5);
    int us6 = BSearch_upperbound(a, len, 6);
    int us7 = BSearch_upperbound(a, len, 7);
    int us8 = BSearch_upperbound(a, len, 8);
    int us9 = BSearch_upperbound(a, len, 9);
    int us10 = BSearch_upperbound(a, len, 0);
    cout << "1:" << us1 << " " << endl;
    cout << "2:" << us2 << " " << endl;
    cout << "3:" << us3 << " " << endl;
    cout << "4:" << us4 << " " << endl;
    cout << "5:" << us5 << " " << endl;
    cout << "6:" << us6 << " " << endl;
    cout << "7:" << us7 << " " << endl;
    cout << "8:" << us8 << " " << endl;
    cout << "9:" << us9 << " " << endl;
    cout << "10:" << us10 << " " << endl;
    return 0;
}

