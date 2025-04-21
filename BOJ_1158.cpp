//https://www.acmicpc.net/submit/1158/79015037
#include <stdio.h>


int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int arr[100001] = {0};

    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    int n = N;
    int index = 0;
    printf("<");
    while (n > 0) {
        int a = 0;
        while (a < K) {
            if (arr[index] != 0) {
                a++;
            }
            index = (index + 1) % N;
        }
        if (index == 0) {
            arr[N - 1] = 0;
            printf("%d", N);
        } else {
            arr[index - 1] = 0;
            printf("%d", index);
        }
        n--;
        if (n > 0) {
            printf(", ");
        }
    }
    printf(">");
    return 0;
}
