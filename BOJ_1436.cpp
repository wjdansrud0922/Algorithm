//https://www.acmicpc.net/problem/1436
#include <iostream>
#include <string>

int main() {
    int n;
    std:: cin >> n;
    int a = 0, count  =0;
    while(true) {
        a++;
        std::string str = std::to_string(a);
        if (str.find("666") != std::string::npos) {
            count ++;
        }
        if (count == n) {
            std::cout << a;
            return 0;
        }
    }
}
