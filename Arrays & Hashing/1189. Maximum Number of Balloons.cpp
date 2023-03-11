#include <iostream>
#include <algorithm>


int maxNumberOfBalloons(std::string &text) {
    int b = 0, a = 0, l = 0, o = 0, n = 0;

    for (char &c: text) {
        if (c == 'b')
            ++b;
        if (c == 'a')
            ++a;
        if (c == 'l')
            ++l;
        if (c == 'o')
            ++o;
        if (c == 'n')
            ++n;
    }
    l /= 2, o /= 2;
    return std::min(std::min(std::min(a, b), std::min(l, o)), n);
}

int main() {
    std::string a = "loonbalxballpoon";
    std::cout << maxNumberOfBalloons(a);
}