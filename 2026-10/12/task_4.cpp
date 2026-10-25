#include <iostream>
#include "matrix.h"


int main() {
    int rows, cols;
    std::cin >> rows >> cols;
    int **original = nullptr;

    if (std::cin.fail() || rows < 1 || cols < 1) {
        return 1;
    }

    try {
        original = matrix::allocate(rows, cols);
        matrix::fill(original, rows, cols);
        matrix::print(original, rows, cols);

        long long sum = matrix::sum(original, rows, cols);
        std::cout << "Sum = " << sum << "\n";
    } catch (const std::invalid_argument &e) {
        return 1;
    } catch (const std::exception &e) {
        matrix::free(original, rows);
        return 2;
    }

    matrix::free(original, rows);

    return 0;
}
