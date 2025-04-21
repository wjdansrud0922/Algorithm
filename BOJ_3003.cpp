//https://www.acmicpc.net/problem/3003
#include <iostream>
int main() {
    int arr[6];
    int c[6] = {1,1,2,2,2,8};
    for (int i = 0 ; i < 6 ; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0 ; i < 6 ; i++) {
        std::cout << c[i] - arr[i] << " ";
    }


}