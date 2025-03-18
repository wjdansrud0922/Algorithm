//https://www.acmicpc.net/problem/10814
#include <vector>
#include <iostream>
#include <algorithm>

bool compare(std::pair<int, std::string> a, std::pair<int, std::string> b) {
    return a.first < b.first;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, std::string>> v(N);

    for (int i = 0; i < N; i++) {
        std::cin >> v[i].first >> v[i].second;
    }
    std::stable_sort(v.begin(), v.end(), compare);
    for (int i = 0; i < N; i++) {
        std::cout << v[i].first << " " << v[i].second << '\n';
    }
}
