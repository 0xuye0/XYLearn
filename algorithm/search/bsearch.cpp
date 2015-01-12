int bsearch(int a[], int start, int end, int key) {
    if (start <= end) {
        int mid = (start + end) / 2;
        if (a[mid] > key) {
            while (a[mid] == a[mid - 1] && mid > 0) {
                mid--;
            }
            return bsearch(a, start, mid - 1, key);
        } else if (a[mid] < key) {
            while (a[mid] == a[mid + 1] && mid <= end) {
                mid++;
            }
            return bsearch(a, mid + 1, end, key);
        } else {
            while (a[mid] == a[mid - 1] && mid > 0) {
                mid--;
            }
            return mid;
        }
    }
    return -1;
}
int BSearch(int a[], int len, int key) {
    return bsearch(a, 0, len - 1, key);
}
