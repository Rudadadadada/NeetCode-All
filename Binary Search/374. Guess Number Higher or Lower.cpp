int guessNumber(int n) {
    if (n == 1)
        return n;

    long long l = 0, r = n;
    while (r - l > 1) {
        long long m = (r + l) / 2;
        if (guess(m) == 0)
            return m;
        if (guess(m) == -1)
            r = m;
        else
            l = m;
    }
    return r;
}