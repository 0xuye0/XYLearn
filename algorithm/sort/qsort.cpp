#include "algorithm/sort/sort.h"
int partion(int a[], int start, int end) {
    int i = start;
    int j = end;
    int temp = a[i];
    while (i < j) {
        while (i < j && a[j] >= temp) {
            j--;
        }
        a[i] = a[j];
        while (i < j && a[i] <= temp) {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = temp;
    return i;
}
void qsort(int a[], int start, int end) {
    if (start < end) {
        int mid = partion(a, start, end);
        qsort(a, start, mid - 1);
        qsort(a, mid + 1, end);
    }
}
void QSort(int a[], int len) {
    qsort(a, 0, len - 1);
}

