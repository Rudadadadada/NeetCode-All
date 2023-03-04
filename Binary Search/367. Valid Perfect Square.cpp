bool isPerfectSquare(int num) {
    long long l = 0, r = num;
    while (r - l > 1) {
        long long m = (r + l) / 2;
        if (m * m >= num)
            r = m;
        else
            l = m;
    }

    if (r * r == num)
        return true;
    return false;
}
