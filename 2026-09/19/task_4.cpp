//
// Created by Андрей on 19.09.2026.
//

#include <cstdlib>
#include <iostream>

int main() {
    const int SIZE = 100;
    const int FROM_RANDOM = 0;
    const int TO_RANDOM = 100;

    int arr[SIZE]{};
    int min = TO_RANDOM;
    int max = FROM_RANDOM;

    std::srand(42);
    std::cout << "arr:\n";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = std::rand() % TO_RANDOM;
        std::cout << arr[i] << " ";

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }
    std::cout << "\n";

    std::cout << "min=" << min << "\n";
    std::cout << "max=" << max << "\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "sorted arr:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
