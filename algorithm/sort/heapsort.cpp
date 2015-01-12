#include "algorithm/sort/sort.h"
void sift(int a[], int start, int end) {
    int i = start;
    int j = 2 * i + 1;
    while (j <= end) {
        if (j < end && a[j] < a[j + 1]) {
            j++;
        }
        if (a[i] > a[j]) {
            break;
        } else {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i = j;
            j = 2 * i + 1;
        }
    }
}
void HeapSort(int a[], int len) {
    for (int i = (len - 1) / 2; i >= 0; --i) {
        sift(a, i, len - 1);
    }
    for (int i = 0; i < len; ++i) {
        int temp = a[0];
        a[0] = a[len - 1 - i];
        a[len - 1 - i] = temp;
        sift(a, 0, len - 2 - i);
    }
}

