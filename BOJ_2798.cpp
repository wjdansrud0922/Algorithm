//https://www.acmicpc.net/problem/2798
#include <iostream>
int main() {
    int N, M;
    std::cin >> N >> M;

    int arr[100001];
    for (int i = 0 ; i < N ; i++) {
        std::cin >> arr[i];
    }
    int max = 0 ,idx = 0;
    for (int i = 0 ; i < N - 2; i++) {
        idx = i;

        for (int k = i; k < N - 1; k++) {
            int sum = arr[i];
            idx++;
            sum += arr[idx];

            for (int j = idx + 1 ; j < N ; j++) {
                int a = sum + arr[j];
                if (a <= M) {
                    if (max < a) {
                        max = a;
                    }
                }

            }

        }

    }

    std::cout << max;

}
