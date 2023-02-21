#include <iostream>
#include <vector>

bool canPlaceFlowers(std::vector<int> flowerbed, int n) {
    int count = 0;
    std::vector<int> distances;
    for (int i = 0; i < flowerbed.size(); ++i) {
        if (flowerbed[i] == 1)
            distances.push_back(i);
    }
    if (distances.empty())
        count += ((int) flowerbed.size() + 1) / 2;
    else {
        count += *min_element(distances.begin(), distances.end()) / 2;
        count += ((int) flowerbed.size() - *max_element(distances.begin(), distances.end()) - 1) / 2;
    }
    for (int i = 1; i < distances.size(); ++i) {
        count += (distances[i] - distances[i - 1] - 2) / 2;
    }
    return (count >= n);
}