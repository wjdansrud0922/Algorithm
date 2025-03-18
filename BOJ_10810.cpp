//https://www.acmicpc.net/problem/10810
#include <iostream>
#include <vector>


int main() {
    int N,M;
    std::cin >> N >> M;
    std::vector<int> v (N,0);


    for (int i = 0 ; i < M; i++) {
        int a,b,c;
        std::cin >> a >> b >> c;
        for (int j = a-1 ; j < b; j++) {
            v[j] = c;
        }
    }

    for (int i = 0 ; i < N ; i++) {
        std::cout << v[i] << " ";
    }
}