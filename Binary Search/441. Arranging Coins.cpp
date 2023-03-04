int arrangeCoins(int n) {
    int l = 0, r = n;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (m * (m + 1) / 2 >= n)
            r = m;
        else
            l = m;
    }
    if (r * (r + 1) == n)
        return r;
    return r - 1;
}
