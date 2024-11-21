//https://acmicpc.net/problem/2935
#include <iostream>
using namespace std;
int main() {
    string a,b;
    char calculation;
    cin >> a;
    cin >> calculation;
    cin >> b;

    if (calculation == '+') {
        if (a.length() > b.length()) {
            a[a.length() - b.length()] = '1';
            cout << a;
        } else if (a.length() < b.length()) {
            b[b.length() - a.length()] = '1';
            cout << b;
        } else {
            a[0] = '2';
            cout << a;
        }
    } else if (calculation == '*') {
        if (a.length() > b.length()) {
            for (int i = 0 ; i < b.length()-1; i++) {
                a += '0';
            }
            cout << a;
        } else {
            for (int i = 0 ; i < a.length()-1; i++) {
                b+='0';
            }
            cout << b;
        }
    }

}
