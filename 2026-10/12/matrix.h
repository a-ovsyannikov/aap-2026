//
// Created by Андрей on 05.10.2026.
//

#ifndef AIP_MATRIX_H
#define AIP_MATRIX_H
#include <iostream>


class matrix {
public:
    static int **allocate(int rows, int cols) {
        if (rows < 1 || cols < 1) {
            throw std::invalid_argument("matrix size < 1");
        }

        int **matrix = new int *[rows]{};
        try {
            for (int i = 0; i < rows; i++) {
                matrix[i] = new int[cols]{};
            }
        } catch (...) {
            for (int i = 0; i < rows; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;
            throw;
        }

        return matrix;
    }

    static void free(int **matrix, int rows) {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    static void fill(int **matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cin >> matrix[i][j];
                if (std::cin.fail()) {
                    throw std::invalid_argument("invalid argument");
                }
            }
        }
    }

    static void print(int **matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

    static long long sum(int **matrix, int rows, int cols) {
        long long sum = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum += matrix[i][j];
            }
        }

        return sum;
    }

    static void findMaximumElement(int **matrix, int rows, int cols,
                                          int &maxVal, int &rowIdx, int &colIdx) {
        maxVal = -INFINITY;
        rowIdx = -1;
        colIdx = -1;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int el = matrix[i][j];
                if (maxVal < el) {
                    maxVal = el;
                    rowIdx = i;
                    colIdx = j;
                }
            }
        }
    }
};


#endif //AIP_MATRIX_H
