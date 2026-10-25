//
// Created by Андрей on 21.09.2026.
//

#include <iostream>

static void printAge(int age) {
    std::cout << "возраст=" << age << "\n";
}

static void analyzeAge(int age) {
    if (age < 0 || age > 130) {
        std::cerr << "invalid age";
        return;
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

    printAge(age);
    analyzeAge(age);

    return 0;
}
