int BSearch_lowerbound(int a[], int len, int key) {
    int l = 0;
    int u = len - 1;
    while (l < u) {
        int mid = (l + u) / 2;
        if (a[mid] < key) {
            l = mid + 1;
        } else {
            u = mid;
        }
    }
    if (a[l] == key) {
        return l;
    }
    return -1;
}
