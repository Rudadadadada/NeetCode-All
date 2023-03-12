#include <iostream>
#include <vector>


int trap(std::vector<int> &height) {
    int ans = 0;
    int l_max = 0, r_max = 0;
    int l = 0, r = (int) height.size() - 1;

    while (l < r) {
        if (height[l] < height[r]) {
            if (l_max > height[l]) {
                ans += l_max - height[l];
            }
            else
                l_max = std::max(l_max, height[l]);
            ++l;
        } else {
            if (r_max > height[r]) {
                ans += r_max - height[r];
            }
            else
                r_max = std::max(r_max, height[r]);
            --r;
        }
    }
    return ans;
}
