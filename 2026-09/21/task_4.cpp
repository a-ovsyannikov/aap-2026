//
// Created by Андрей on 21.09.2026.
//

#include <iostream>

static void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

static void printPyramid(int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

static void printRectangle(int n, int k) {
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == (n - 1)) {
            for (int j = 0; j < k; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        } else {
            std::cout << "*";
            for (int j = 0; j < k - 2; j++) {
                std::cout << " ";
            }
            std::cout << "*\n";
        }
    }
}

int main() {
    printTriangle(6);
    std::cout << "triangle\n\n";

    printPyramid(6);
    std::cout << "pyromid\n\n";

    printRectangle(5, 10);
    std::cout << "rectangle\n\n";

    return 0;
}
