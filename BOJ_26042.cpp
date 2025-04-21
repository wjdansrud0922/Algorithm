//https://www.acmicpc.net/problem/26042

#include <iostream>
#include <queue>


int main() {
    std::queue<int> q;
    std::queue<int> line;
    int n, N;
    std::cin >> n;
    for (int i = 0 ; i < n; i++) {
        std::cin >> N;
        switch (N) {
            case 1:
                int person;
                std::cin >> person;
                q.push(person);
                break;
            case 2:
                q.pop();
                break;
        }

        if (line.size() < q.size()) {
            line.push(q.back());
        } else if (line.size() == q.size()) {
            if (line.back() > q.back()) {
                line.pop();
                line.push(q.back());
            }
        }
    }
    std::cout << line.size() << " " << line.back();

}
