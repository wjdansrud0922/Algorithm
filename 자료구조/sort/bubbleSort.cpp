#include <future>
#include<iostream>
#include<vector>

void bubbleSort(std::vector<int> v) {
    std::cout << "정렬 전 : ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    for (int i = 0 ; i < v.size() - 1; i++) {
        for (int j = 1; j < v.size() - i; j++) {
            if (v[j-1] > v[j]) {
                std::swap(v[j-1], v[j]);
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

    bubbleSort(v);
}