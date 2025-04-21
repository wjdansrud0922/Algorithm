//https://www.acmicpc.net/problem/30089
#include <iostream>
#include <algorithm>
int main() {

    int n;
    std::cin >> n;
    std::string S;

    for (int i = 0 ; i < n ; i++ ) {
        int idx = 0;
        std::cin >> S;
        std::string r = S;
        reverse(r.begin(), r.end());
        std::cout << S;
        if (S.length() % 2 == 0) {
            for (int j = 0 ; j < S.length() ; j++) {
                if (S[j] == r[idx]) {
                    idx++;
                }
            }
        } else {
            for (int j = S.length() ; j >= 0 ; j--) {
                if (S[j] == r[idx]) {
                    idx++;
                }
            }
        }


        for (int k = idx; k < r.length() ; k++) {
            std::cout << r[k];
        }

        std::cout << '\n';
    }
}