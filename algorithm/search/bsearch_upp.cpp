int BSearch_upperbound(int a[], int len, int key) {
    int l = 0;
    int u = len - 1;
    while (l + 1 < u) {
        int mid = (l + u) / 2;
        if (a[mid] > key) {
            u = mid - 1;
        } else {
            l = mid;
        }
    }
    if (a[u] == key) {
        return u;
    } else if (a[l] == key) {
        return l;
    }
    return -1;
}

