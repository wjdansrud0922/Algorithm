#include <iostream>
#include <queue>
#include <vector>

class circular_queue {
public:
    int front = -1;
    int rear = -1;
    int arr[10]{};

    bool isFull() {
        if (front == 0 && rear == 9) {
            return true;
        }
        if (front == (rear + 1) % 10) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1) {
            return true;
        } else {
            return false;
        }
    }
    void push(int n) {
        if (isFull) {
            std::cout << "큐가 꽉 참";
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % 10;
        arr[rear] = n;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "큐가 비어있음.";
            return -1;
        }
        int element = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % 10;
        }
        return element;
    }

};
int main() {
    circular_queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    std::cout << "Pop: " << q.pop() << "\n"; // 1
    std::cout << "Pop: " << q.pop() << "\n"; // 2
    q.push(4);
    std::cout << "Pop: " << q.pop() << "\n"; // 3
    std::cout << "Pop: " << q.pop() << "\n"; // 4
}