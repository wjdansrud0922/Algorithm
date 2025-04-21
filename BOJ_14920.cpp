//https://www.acmicpc.net/problem/14920
#include <iostream>
int main() {
    int n, cnt = 1;;
    std::cin >> n;

    while (n != 1) {
        if (n % 2 == 0) { //짝
            n/=2;
        } else { //홀
            n = 3*n+1;
        }
        cnt++;
    }

    std::cout << cnt;
}