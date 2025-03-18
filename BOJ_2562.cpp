//https://www.acmicpc.net/problem/2562
#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v;
    for (int i = 0 ; i < 9 ; i++) {
        int a;
        std::cin >> a;
        v.push_back(a);
    }

    auto max = std::max_element(v.begin(), v.end());
    for (int i = 0 ; i < 9 ; i++) {
        if (v[i] == *max) {
            std::cout << *max << '\n' << i + 1;
            return 0;
        }
    }

}