#include <iostream>
#include <vector>

bool is_string_digit(std::string &a) {
    if ((int) a.size() == 1) {
        if (a[0] == '+' || a[0] == '-' || a[0] == '*' || a[0] == '/')
            return false;
        return true;
    }
    return true;
}

int evalRPN(std::vector<std::string> &tokens) {
    int tmp = 0;
    std::vector<int> stack;

    for (std::string &elem: tokens) {
        if (is_string_digit(elem))
            stack.push_back(std::stoi(elem));
        else {
            int first = stack.back();
            stack.pop_back();
            int second = stack.back();
            stack.pop_back();
            if (elem == "+")
                tmp = (second + first);
            if (elem == "-")
                tmp = (second - first);
            if (elem == "*")
                tmp = (second * first);
            if (elem == "/")
                tmp = (second / first);
            stack.push_back(tmp);
        }
    }
    return stack.back();
}