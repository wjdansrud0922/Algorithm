//https://www.acmicpc.net/problem/21756
#include <iostream>
#include <string>

int main() {
    int arr[100001];
    int N;
    std::cin >> N;
    for (int i = 1 ; i <= N; i++) {
        arr[i] = i;
    }

    while(1) {
        int idx = 1;
        if (N <= 1) {
            break;
        }
        for (int i = 1 ; i <= N ; i++) {
            if (i % 2 == 0) {
                arr[idx] = arr[i];
                idx++;
            }
        }
        N -= idx;
    }
    std::cout << arr[1];
}