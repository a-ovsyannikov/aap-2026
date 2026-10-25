#include <iostream>

#include "matrix.h"

static long long sumDiagonalAbs(int **matrix, int dim) {
    if (dim % 2 == 0) {
        throw std::invalid_argument("dim % 2 = 0");
    }

    long long sum = 0;
    for (int i = 0; i < dim; i++) {
        // главная
        sum += matrix[i][i];

        // побочная
        if (i != (dim - 1) / 2) {
            sum += matrix[i][dim - 1 - i];
        }
    }
    return sum;
}

static bool isOrderedArray(int *arr, int size) {
    if (arr == nullptr) {
        throw std::invalid_argument("arr is nullptr");
    }
    if (size < 1) {
        throw std::invalid_argument("size < 1");
    }
    if (size == 1) {
        return true;
    }

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}

static int getNumberOfOrderedMatrixRows(int **matrix, int dim) {
    if (matrix == nullptr) {
        throw std::invalid_argument("arr is nullptr");
    }

    int count = 0;
    for (int i = 0; i < dim; i++) {
        count += isOrderedArray(matrix[i], dim);
    }

    return count;
}


int main() {
    int dim;
    std::cin >> dim;
    int **original = nullptr;

    if (std::cin.fail()) {
        return 1;
    }

    try {
        original = matrix::allocate(dim, dim);
        matrix::fill(original, dim, dim);
        matrix::print(original, dim, dim);
        long long matrixDiagonalSum = sumDiagonalAbs(original, dim);
        int numberOfOrderedMatrixRows = getNumberOfOrderedMatrixRows(original, dim);

        std::cout << "matrixDiagonalSum=" << matrixDiagonalSum << "\n";
        std::cout << "numberOfOrderedMatrixRows=" << numberOfOrderedMatrixRows << "\n";
    } catch (const std::invalid_argument &e) {
        return 2;
    } catch (const std::exception &e) {
        matrix::free(original, dim);
        return 3;
    }

    matrix::free(original, dim);
    return 0;
}
