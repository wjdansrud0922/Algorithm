//https://www.acmicpc.net/problem/2346
#include <iostream>
#include <deque>

int main() {
    int N;
    std::cin >> N;
    std::deque<int> dq;
    std::deque<int> num;
    for (int i = 0 ; i < N ; i++) {
        int a;
        std::cin >> a;
        dq.push_back(a);
        num.push_back(i+1);
    }

    int idx = 0;

    while(!dq.empty()) {
        std::cout << num.at(idx)  << " ";
        idx = (idx + dq.at(idx)) % dq.size();
        dq.erase(dq.begin() + idx, dq.begin() + idx + 1);
        num.erase(dq.begin() + idx, dq.begin() + idx + 1);

    }



}
