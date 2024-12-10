//https://www.acmicpc.net/problem/9625
#include <iostream>
int main() {
    int A = 1, B = 0;
    int N;
    std:: cin >> N;
    for (int i = 0 ; i < N ; i++) {
        int tmp = B;
        B = A + B;
        A = tmp;
    }

    std::cout << A << " " << B;

}
