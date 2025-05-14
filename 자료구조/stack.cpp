#include <iostream>

struct Stack {
    static const int MAX_SIZE = 1;
    int arr[MAX_SIZE];
    int idx = -1;

    void push(int data) {
        if (isFull()) {
            std::cout << "스택이 가득 찼습니다." << std::endl;
            return;
        }
        arr[++idx] = data;
    }

    bool empty() const {
        return idx < 0;
    }

    int pop() {
        if (empty()) {
            std::cout << "스택이 비어있습니다." << std::endl;
            return -1;
        }
        return arr[idx--];
    }

    int top() const {
        if (empty()) {
            std::cout << "스택이 비어있습니다." << std::endl;
            return -1;
        }
        return arr[idx];
    }

    int size() const {
        return idx + 1;
    }

    bool isFull() const {
        return idx == MAX_SIZE - 1;
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);


    return 0;
}