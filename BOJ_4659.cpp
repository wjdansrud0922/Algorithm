//https://www.acmicpc.net/problem/4659
#include <iostream>
#include <string>

int main() {
    bool check = false;
    std::string password;
    while(1) {
        bool check = false;
        std::cin >> password;
        if (password == "end") {
            break;
        }
        std:: cout << "<" << password << "> is ";
        if (password.find_first_of("aeiou") == std::string::npos) { //https://modoocode.com/249
            std::cout << "not acceptable.\n";
            continue;
        }

        for (int i = 1 ; i < password.length() - 1; i++) {

            if (!(password[i] == 'e' || password[i] == 'o') && ((password[i-1] == password[i]) || (password[i+1] == password[i]))) {
                std::cout << "not acceptable.\n";
                check = true;
                break;

            } else if (password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u') {
                if (password[i+1] == 'a' || password[i+1] == 'e' || password[i+1] == 'i' || password[i+1] == 'o' || password[i+1] == 'u') {
                    if (password[i-1] == 'a' || password[i-1] == 'e' || password[i-1] == 'i' || password[i-1] == 'o' || password[i-1] == 'u') {
                        std::cout << "not acceptable.\n";
                        check = true;
                        break;
                    }
                }
            } else if (!(password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u')) {
                if (!(password[i+1] == 'a' || password[i+1] == 'e' || password[i+1] == 'i' || password[i+1] == 'o' || password[i+1] == 'u')) {
                    if (!(password[i-1] == 'a' || password[i-1] == 'e' || password[i-1] == 'i' || password[i-1] == 'o' || password[i-1] == 'u')) {
                        std::cout << "not acceptable.\n";
                        check = true;
                        break;
                    }
                }
            }
        }

        std::cout << (check ? "" : "acceptable.\n");
    }
}