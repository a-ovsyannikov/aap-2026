//
// Created by Андрей on 19.09.2026.
//

#include <iostream>

int main() {
    enum Season {
        SPRING,
        SUMMER,
        AUTUMN,
        WINTER
    };

    Season s = SUMMER;

    switch (s) {
        case SUMMER:
            std::cout << "summer ";
            break;
        case SPRING:
            std::cout << "spring ";
            break;
        case AUTUMN:
            std::cout << "autumn ";
            break;
        case WINTER:
            std::cout << "winter ";
            break;
    }
    std::cout << s << "\n";

    return 0;
}
