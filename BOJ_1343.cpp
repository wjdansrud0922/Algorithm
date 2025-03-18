//https://www.acmicpc.net/problem/1343
#include <iostream>
int main() {
    std::string pol;
    std::cin >> pol;
    std::string answer;
    int x = 0;

    for (int i = 0 ;; i++) {
        if (pol[i] == '.'){
            if (x%2 != 0) {
                std::cout << -1;
                return 0;
            } else {
                while(x != 0) {
                    if (x / 4 != 0) {
                        for (int j = 0 ; j < x / 4 ; j++) {
                            x-=4;
                            answer += "AAAA";
                        }
                    } else if (x / 2 != 0) {
                        for (int j = 0 ; j < x / 2 ; j++) {
                            x-=2;
                            answer += "BB";
                        }
                    }
                }

            }
            x = 0;
            answer += '.';
        } else {
            x++;
        }

        if ( i == (pol.length() - 1) ) {

            if (x%2 != 0) {
                std::cout << -1;
                return 0;
            } else {
                while(x != 0) {
                    if (x / 4 != 0) {
                        for (int j = 0 ; j < x / 4 ; j++) {
                            x-=4;
                            answer += "AAAA";
                        }
                    } else if (x / 2 != 0) {
                        for (int j = 0 ; j < x / 2 ; j++) {
                            x-=2;
                            answer += "BB";
                        }
                    }
                }

            }
            break;
        }
    }

    std::cout << answer;
}