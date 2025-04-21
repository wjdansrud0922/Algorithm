//https://www.acmicpc.net/problem/25372
#include <iostream>
#include <string>
int main() {
    int n;
    std::cin >> n;
    for (int i = 0 ; i < n; i++) {
        std::string str;
        std::cin >> str;
        if (str.length() >= 6 && str.length() <= 9) {
            std::cout << "yes" << '\n';
        } else {
            std::cout << "no" << '\n';
        }
    }
}
