//https://www.acmicpc.net/problem/15973
#include <iostream>

int P[4];
int Q[4];
int main() {
    for (int i = 0 ; i < 4 ; i++) {
        std::cin >> P[i];
    }
    for (int i = 0 ; i < 4 ; i++) {
        std::cin >> Q[i];
    }

    if ((P[0] == Q[0] && P[1] == Q[1]) || (P[0] == Q[2] && P[1] == Q[3]) || (P[2] == Q[0] && P[3] == Q[1]) || (P[2] == Q[2] && P[3] == Q[3]))  {

        std::cout << "POINT";
        return 0;
    }

    if (P[0] == Q[0]) {

    } else if (P[0] == Q[2]) {

    } else if (P[2] == Q[0]) {

    } else if (P[2] == Q[0]) {
        if (Q[1] < P[3] || ((Q[3] > P[1]) && Q[3] )
    }
    if (P[1] == Q[1]) {

    } else if (P[1] == Q[3]) {

    } else if (P[3] == Q[1]) {

    } else if (P[3] == Q[3]) {

    }

}