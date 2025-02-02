//https://www.acmicpc.net/problem/10828

using namespace std;
#include <iostream>
#include <stack>

int main() {
    stack<int> st;
    string cmd;

    int N;
    cin >> N;

    for (int i = 0 ; i < N; i++) {
        cin >> cmd;
        switch (cmd[0]) {
            case 't':
                if (st.empty()){
                    cout << "-1" << "\n";
                    break;
                }
                cout << st.top() << "\n";
                break;
            case 's':
                cout << st.size() << "\n";
                break;
            case 'e':
                cout << st.empty() << "\n";
                break;
            case 'p':
                if (cmd.length() == 4) {
                    int n;
                    cin >> n;
                    st.push(n);
                    break;
                }
                if (st.empty()){
                    cout << "-1\n";
                    break;
                }
                cout << st.top() << "\n";
                st.pop();
                break;
        }
    }
}
