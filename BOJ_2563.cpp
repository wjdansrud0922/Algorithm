////https://acmicpc.net/problem/2563
#include <iostream>
using namespace std;

bool paper[100][100] = {false,};

void check(int x, int y) {
    for (int i = 100-(10+y) ; i < 100-(10+y) + 10; i++) {
        for (int j = x ; j < 10+x ; j++) {
            paper[i][j] = true;
        }
    }
}
int main() {
    int n;
    cin >> n;

    for (int i = 0 ; i < n; i++) {
        int x,y;
        cin >> x >> y;
        check(x,y);
    }

    int sum = 0;
    for (int i = 0 ; i < 100; i ++) {
        for (int j = 0 ; j < 100; j++) {
            if (paper[i][j] == true) {
                sum++;
            }
        }

    }
    cout << sum;
}