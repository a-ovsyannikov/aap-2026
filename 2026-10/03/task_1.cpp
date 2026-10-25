#include <iostream>

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};

    int *ptrs[6];
    for (int i = 0; i < 6; i++) {
        ptrs[i] = &arr[i];
    }

    std::swap(*ptrs[0], *ptrs[5]);
    std::swap(*ptrs[2], *ptrs[4]);

    for (int el : arr) {
        std::cout << el << " ";
    }

    std::cout << *ptrs[0] << "\n";
    std::cout << ptrs[0] << "\n";

    return 0;
}
