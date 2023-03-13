#include <iostream>
#include <vector>

bool isValid(std::string &s) {
    std::vector<char> stack;
    for (char &c: s) {
        if (!stack.empty()) {
            if (c == ')' && stack.back() == '(')
                stack.pop_back();
            else if (c == ']' && stack.back() == '[')
                stack.pop_back();
            else if (c == '}' && stack.back() == '{')
                stack.pop_back();
            else
                stack.push_back(c);
        } else
            stack.push_back(c);
    }
    if (!stack.empty())
        return false;
    return true;
}