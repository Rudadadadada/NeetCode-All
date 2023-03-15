#include <iostream>
#include <queue>


class MyStack {
public:
    std::queue<int> first_queue;
    std::queue<int> second_queue;

    MyStack() {

    }

    void push(int x) {
        first_queue.push(x);
    }

    int pop() {
        if (!first_queue.back())
            return -1;

        int ans = first_queue.back();

        int i = 0;
        while(i < first_queue.size() - 1) {
            second_queue.push(first_queue.front());
            first_queue.pop();
        }
        first_queue.pop();

        while (!second_queue.empty()) {
            first_queue.push(second_queue.front());
            second_queue.pop();
        }
        return ans;
    }

    int top() {
        return first_queue.back();
    }

    bool empty() {
        if (first_queue.empty())
            return true;
        return false;
    }
};