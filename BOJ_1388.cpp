//https://www.acmicpc.net/problem/1388
#include <iostream>
int main() {
    std::string A,B;

    std::cin >> A >> B;

    int max = 0;
    for (int i = 0 ; i < B.length() - A.length(); i++) {
        int tmp = 0;
        for (int j = 0 ; j < A.length(); j++) {
            if (A[j] == B[j]) {
                tmp++;
            }

        }
        if (tmp > max) {
            max = tmp;
        }

    }

    std::cout << max;

}