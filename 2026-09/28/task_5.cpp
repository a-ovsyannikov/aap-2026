#include <iostream>

const int MAX_SIZE = 3;

static int sumArray(int m[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += m[i][j];
        }
    }

    return sum;
}

int main() {
    int mtx[MAX_SIZE][MAX_SIZE] = {
        {1, 2, 3},
        {0, 0, 0},
        {0, 0, 0}
    };

    int sum = sumArray(mtx, 3, 3);

    return 0;
}
