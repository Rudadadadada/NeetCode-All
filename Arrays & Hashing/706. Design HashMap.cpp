#include <vector>

class MyHashMap {
public:
    std::vector<int> data;
    MyHashMap() {
        for (int i = 0; i < 1000001; ++i)
            data.push_back(-1);
    }

    void put(int key, int value) {
        data[key] = value;
    }

    int get(int key) {
        return data[key];
    }

    void remove(int key) {
        data[key] = -1;
    }
};