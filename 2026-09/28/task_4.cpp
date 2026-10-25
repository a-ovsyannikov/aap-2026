//
// Created by Андрей on 22.09.2026.
//

#include <iostream>

const int MAX_SIZE = 5;

static void inArray(int m[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int x;
            std::cin >> x;

            if (std::cin.fail()) {
                throw std::runtime_error("err");
            }

            if (i > MAX_SIZE || j > MAX_SIZE) {
                throw std::out_of_range("err");
            }

            m[i][j] = x;
        }
    }
}

int main() {
    int rows = 2;
    int cols = 2;

    int m[MAX_SIZE][MAX_SIZE] = {};
    inArray(m, rows, cols);

    return 0;
}
