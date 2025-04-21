<<<<<<< HEAD
//https://www.acmicpc.net/problem/4949
=======
//https://www.acmicpc.net/problem/4949
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    while (1) {
        string arr;
        getline(cin ,arr);
        int len = arr.length();
        if (len == 1 && arr[0] == '.') {
            return 0;
        }
        stack<char> stack;
        int check = 0;
        for (int i = 0 ; i < len ; i++) {
            if (arr[i] == '(' || arr[i] == '[') {
                stack.push(arr[i]);
            }
            if (arr[i] == ')' || arr[i] == ']'){
                if (stack.empty()) {
                    check = 1;
                    cout << "no\n";
                    break;
                }else {
                    if (stack.top() == '(' && arr[i] == ')') {
                        stack.pop();
                    }else if (stack.top() == '[' && arr[i] == ']') {
                        stack.pop();
                    }else {
                        check = 1;
                        cout << "no\n";
                        break;
                    }
                }
            }
        }
        if (check == 0) {
            if (stack.empty()) {
                cout << "yes\n";
            }else {
                cout << "no\n";
            }
        }
    }
}
>>>>>>> d93bacb690c1e92c284e5df19198444e29a80c46
