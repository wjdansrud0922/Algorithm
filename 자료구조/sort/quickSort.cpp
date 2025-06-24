#include <iostream>
#include <vector>

void quickSort(std::vector<int>& v, int st, int en) {
    if (st >= en) return;

    int pivot = st;
    int low = st + 1;
    int high = en;

    while (low <= high) {
        while (low <= en && v[low] <= v[pivot]) low++;
        while (high > st && v[high] >= v[pivot]) high--;

        if (low > high) {
            std::swap(v[pivot], v[high]);
        } else {
            std::swap(v[low], v[high]);
        }
    }

    quickSort(v, st, high - 1);
    quickSort(v, high + 1, en);
}

int main() {
    std::vector<int> v;
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        std::cin >> a;
        v.push_back(a);
    }

    std::cout << "정렬 전 : ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    quickSort(v, 0, v.size() - 1);

    std::cout << "정렬 후 : ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    std::cout << "중간값: " << v[v.size() / 2] << "\n";
}
