#include <iostream>
#include <vector>


class MinStack {
public:
    std::vector<int> stack;
    std::vector<int> min_stack;

    MinStack() {

    }

    void push(int val) {
        stack.push_back(val);
        if (min_stack.empty() || min_stack.back() >= val)
            min_stack.push_back(val);
    }

    void pop() {
        if (min_stack.empty() && stack.back() == min_stack.back())
            min_stack.pop_back();
        stack.pop_back();
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return min_stack.back();
    }
};
