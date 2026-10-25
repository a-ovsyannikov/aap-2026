//
// Created by Андрей on 22.09.2026.
//

#include <iostream>
#include <stdexcept>

static void analyzeAge(int age) {
    if (age < 0 || age > 200) {
        throw std::invalid_argument("возраст должен быть в диапазоне от 1 до 200");
    }

    if (age < 30) {
        std::cout << "вы молоды" << "\n";
    } else if (age < 70) {
        std::cout << "вы прекрасны" << "\n";
    } else {
        std::cout << "молодцы!" << "\n";
    }
}

int main() {
    int age;
    std::cin >> age;

    if (std::cin.fail()) {
        throw std::invalid_argument("возраст должен быть цифрой");
    }

    try {
        analyzeAge(age);
    } catch (std::invalid_argument &e) {
        std::cerr << e.what() << "\n";
    }

    return 0;
}
