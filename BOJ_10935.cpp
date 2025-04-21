//https://www.acmicpc.net/problem/10935
#include <iostream>
#include <bitset>
#include <string>

int main() {
    std::string base64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::string S;
    std:: cin >> S;
    std::string bit ="";

    for (char bb : S) {
        std::bitset<8> b(bb);
        bit += b.to_string();
    }


    while(bit.length()%6 != 0) {
        bit+="0";

    }
    for (int i = 0 ; i < bit.length()/6; i++) {
        std::string str = "";
        for (int j = i * 6 ; j < i*6 + 6; j++) {
            str+=bit[j];
        }
        std::bitset<6> z(str);
        std::cout << base64[z.to_ulong()];
    }

    int padding = S.length()%3;
    if (padding == 1) {
        std::cout << "==";
    } else if (padding == 2) {
        std::cout << "=";
    }


}
