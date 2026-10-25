//
// Created by Андрей on 22.09.2026.
//

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (std::cin.bad()) {
        std::cerr << "internal stream error\n";
        return 1;
    }

    if (std::cin.eof()) {
        std::cerr << "unexpected end of file\n";
        return 2;
    }

    if (std::cin.fail()) {
        std::cerr << "invalid input (not a number)\n";
        return 3;
    }

    std::cout << "you entered: " << n << "\n";
    return 0;
}
