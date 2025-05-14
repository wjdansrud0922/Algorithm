#include <iostream>
#include <stack>

int main() {
    std::stack<int> st;

    st.push(1);
    st.push(1);
    std::cout << st.top();

}