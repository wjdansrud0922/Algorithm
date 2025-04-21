//https://www.acmicpc.net/problem/9012
#include <iostream>
#include <stack>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0 ; i < n ; i++) {
        std::string cmd;
        std::cin >> cmd;
        bool check = 0;
        int m = 0;
        for (int j = 0 ; j < cmd.length(); j++) {
            if (cmd[j] == '(') {
                m++;
            } else {
                m--;
                if (m < 0) {
                    std::cout << "NO";
                    check = 1;
                    break;
                }
            }
        }
        if (check == 0) {
            if (m != 0) {
                std::cout << "NO";
            } else {
                std::cout << "YES";
            }
        }


        std::cout << "\n";

    }
}