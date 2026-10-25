//
// Created by Андрей on 22.09.2026.
//

#include <iostream>

static double printPowersOfTwo(int n) {
    if (n < 0 || n > 62) {
        return -1;
    }
    double x = 2;
    int j = 1;
    while (x < n) {
        std::cout << "2^" << j << "=" << x << "\n";
        x *= 2;
        j++;
    }

    return x;
}

int main() {
    int n;
    std::cin >> n;

    printPowersOfTwo(n);

    return 0;
}
