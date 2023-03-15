#include <iostream>
#include <vector>

std::vector<int> asteroidCollision(std::vector<int> &asteroids) {
    std::vector<int> stack;
    for (int &elem: asteroids) {
        if (elem > 0 || stack.empty())
            stack.push_back(elem);

        else {
            while (!stack.empty() and stack.back() > 0 and stack.back() < abs(elem))
                stack.pop_back();

            if (!stack.empty() and stack.back() == abs(elem))
                stack.pop_back();
            else if (stack.empty() || stack.back() < 0)
                stack.push_back(elem);
        }
    }

    return stack;
}