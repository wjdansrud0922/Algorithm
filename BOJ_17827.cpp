//https://www.acmicpc.net/problem/1782
#include <iostream>
#include <vector>

int main() {
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::vector<int> v;
    int N,M,V;
    std::cin >> N >> M >> V;
    for (int i = 0 ; i < N ; i++) {
        int a;
        std::cin >> a;

        v.push_back(a);
    }

    for (int i = 0 ; i < M ; i++) {
        int a;
        std::cin >> a;

        if (a >= N) {
            a = (a-N)%(N-(V-1)) + V;
            std::cout << v[a - 1] << '\n';
        } else {
            std::cout << v[a] << '\n';
        }
    }


}