//https://www.acmicpc.net/problem/10773

#include <iostream>
#include <stack>

int n, sum, N;
std::stack<int> st;

int main() {
    std::cin >> n;
    for (int i = 0 ; i < n ; i ++) {
        std::cin >> N;
        if (N == 0) {
            st.pop();
            continue;
        }

        st.push(N);
    }

    while(!st.empty()) {
        sum += st.top();
        st.pop();
    }

    std::cout << sum;

}