//
// Created by Андрей on 21.09.2026.
//

#include <cstdlib>
#include <iostream>

int main() {
    const int dim1 = 10;
    const int dim2 = 10;
    const int RANDOM_MIN = -100;
    const int RANDOM_MAX = 100;
    int arr[dim1][dim2]{};

    std::srand(42);
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            arr[i][j] = std::rand() % (RANDOM_MAX - RANDOM_MIN) + RANDOM_MIN;
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < dim1; i++) {
        int sum = 0;
        for (int j = 0; j < dim2; j++) {
            sum += arr[i][j];
        }
        std::cout << "row=" << i << ", sum=" << sum << "\n";
    }

    return 0;
}
