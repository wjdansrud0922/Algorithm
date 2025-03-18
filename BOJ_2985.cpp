//https://www.acmicpc.net/problem/2985
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for (int i = 0; i < 3; i++) {
        int n;
        std::cin >> n;
        v.push_back(n);
    }


    if (v[0] + v[1] == v[2]) {
        std::cout << v[0] << "+" << v[1] << "=" << v[2];
    } else if (v[1] + v[2] == v[0]) {
        std::cout << v[0] << "=" << v[1] << "+" << v[2];
    } else if (v[0] - v[1] == v[2]) {
        std::cout << v[0] << "-" << v[1] << "=" << v[2];
    } else if (v[1] - v[2] == v[0]) {
        std::cout << v[0] << "=" << v[1] << "-" << v[2];
    }  else if (v[0] / v[1] == v[2]) {
        std::cout << v[0] << "/" << v[1] << "=" << v[2];
    } else if (v[1] / v[2] == v[0]) {
        std::cout << v[0] << "=" << v[1] << "/" << v[2];
    }  else if (v[0] * v[1] == v[2]) {
        std::cout << v[0] << "*" << v[1] << "=" << v[2];
    } else if (v[1] * v[2] == v[0]) {
        std::cout << v[0] << "=" << v[1] << "*" << v[2];
    }
}
