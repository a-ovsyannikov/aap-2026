//
// Created by Андрей on 22.09.2026.
//

#include <iostream>
#include <stdexcept>

static long long pow2(const long long number) {
    return static_cast<long long>(number) * number;
}

static long long inputNumber() {
    long long number;

    std::cin >> number;
    if (std::cin.fail()) {
        throw std::invalid_argument("invalid argument");
    }

    return number;
}

int main() {
    try {
        const long long firstNumber = pow2(inputNumber());
        const long long secondNumber = pow2(inputNumber());

        if (secondNumber == 0) {
            throw std::invalid_argument("second number must be not null");
        }

        const double div = static_cast<double>(firstNumber) / secondNumber;
        std::cout << "div=" << div << "\n";
    } catch (std::invalid_argument &e) {
        std::cerr << e.what() << "\n";
    }

    return 0;
}
