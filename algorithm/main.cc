#include <iostream>
#include "algorithm/sort/sort.h"
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
    return 0;
}

