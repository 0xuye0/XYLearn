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
