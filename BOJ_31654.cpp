//https://www.acmicpc.net/problem/31654
#include <iostream>
int main() {
    int a,b,c;
    std::cin >> a >> b >> c;
    if (a + b == c) {
        std::cout << "correct!";
        return 0;
    }
    std::cout << "wrong!";
}