#include <iostream>
#include <vector>

void insertionSort(std::vector<int> v) {

    std::cout << "정렬 전 : ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    for (int i = 1; i < v.size(); i++) {
        int idx = i;
        for (int j = i-1 ; j >= 0 ; j--) {

            if (v[idx] < v[j]) {
                std::swap(v[idx], v[j]);
                idx--;
            }
        }
    }

    std::cout << "정렬 후 : ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
}

int main() {
    std::vector<int> v{3,5,6,4,1,2};

    insertionSort(v);
}

