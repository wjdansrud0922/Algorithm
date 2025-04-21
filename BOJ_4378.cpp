//https://www.acmicpc.net/problem/4378
#include <iostream>
#include <string>

int main() {
    std::string line1 = "`1234567890-=";
    std::string line2 = "QWERTYUIOP[]\\";
    std::string line3 = "ASDFGHJKL;\'";
    std::string line4 = "ZXCVBNM,./";
    std::string cmd;
    while(std::getline(std::cin, cmd)) {
        int len = cmd.length();
        bool check = false;
        for (int i = 0 ; i < len; i++) {
            check = false;
            for(int j = 0 ; j < line1.length(); j++) {
                if (line1[j] == cmd[i]) {
                    std::cout << line1[j-1];
                    check = true;
                    break;
                }
            }

            for(int j = 0 ; j < line2.length(); j++) {
                if (line2[j] == cmd[i]) {
                    std::cout << line2[j-1];
                    check = true;
                    break;
                }
            }

            for(int j = 0 ; j < line3.length(); j++) {
                if (line3[j] == cmd[i]) {
                    std::cout << line3[j-1];
                    check = true;
                    break;
                }
            }

            for(int j = 0 ; j < line4.length(); j++) {
                if (line4[j] == cmd[i]) {
                    std::cout << line4[j-1];
                    check = true;
                    break;
                }
            }

            if (check == true) {
                continue;
            }
            std::cout << " ";
        }
        std::cout << "\n";
    }
}
