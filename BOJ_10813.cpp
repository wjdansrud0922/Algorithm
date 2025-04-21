//https://acmicpc.net/problem/10813
#include <iostream>
#include <vector>
int main() {
    int N,M;
    std::cin >> N >> M;
    std::vector<int> v{};
    for (int i = 0 ; i < N ; i++) {
        v.push_back(i+1);
    }

    for (int i = 0 ; i < M; i++) {
        int a,b;
        std::cin >> a >> b;
        int tmp = v[a-1];
        v[a-1] = v[b-1];
        v[b-1] = tmp;

    }

    for (int i = 0 ; i < N ; i++) {
        std::cout << v.at(i) << " ";
    }

}