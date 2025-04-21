//https://www.acmicpc.net/problem/17249
#include <iostream>

int main() {
    std::string tabo;
    std::cin >> tabo;


    bool rlcheck = false;
    int r = 0;
    int l = 0;
    for (int i = 0 ; i < tabo.length(); i++) {
        if (tabo[i] == '(') {
            rlcheck = true;
        }

        if (rlcheck == false && tabo[i] == '@') {
            l++;
        } else if (rlcheck == true && tabo[i] == '@') {
            r++;
        }
    }

    std:: cout << l << " " << r;
}