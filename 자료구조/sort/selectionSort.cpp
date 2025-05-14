#include <future>
#include<iostream>
#include<vector>

void selectionSort(std::vector<int> v) {
    std::cout << "정렬 전 : ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    for (int i = 0 ; i < v.size() - 1; i++) {
        int temp = i;

        for (int j = i+1 ; j < v.size(); j++) {
            if (v[temp] < v[j]) {
                temp = j;
            }
        }

        std::swap(v[i], v[temp]);
    }

    std::cout << "정렬 후 : ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }

}

int main() {
    std::vector<int> v{3,5,6,4,1,2};

    selectionSort(v);
}