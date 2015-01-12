#include "algorithm/sort/sort.h"
void merge(int a[], int start, int mid, int end, int temp[]) {
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = a[i++];
    }
    while (j <= end) {
        temp[k++] = a[j++];
    }
    for (int t = 0; t < k; ++t) {
        a[start + t] = temp[t];
    }
}
void mergesort(int a[], int start, int end, int temp[]) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergesort(a, start, mid, temp);
        mergesort(a, mid + 1, end, temp);
        merge(a, start, mid, end, temp);
    }
}
void MergeSort(int a[], int len) {
    int* temp = new int[len];
    mergesort(a, 0, len - 1, temp);
    delete[] temp;
}

