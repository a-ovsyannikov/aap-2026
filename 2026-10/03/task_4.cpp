#include <iostream>

int main() {
    const int SIZE = 10;
    int *arr = new int[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10;
    }

    int *p = arr;
    for (int i = 0; i < SIZE; i++) {
        std::cout << *(p + i) << " ";
    }
    std::cout << "\n";

    std::swap(*p, *(p + SIZE - 1));
    for (int i = 0; i < SIZE; i++) {
        *(p + i) = *(p + i) + 1;
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}
