//
// Created by Андрей on 22.09.2026.
//

#include <iostream>

static int fillForward(char arr[], int maxSize) {
    char x = '0';
    int i = 0;
    while (true) {
        std::cin >> x;

        if (std::cin.fail()) {
            throw std::runtime_error("error");
        }

        if (x == '0') {
            break;
        }

        if (i >= maxSize) {
            throw std::out_of_range("error");
        }

        arr[i] = x;
        i++;
    }

    return i;
}

static void printReverse(char arr[], int maxSize) {
    for (int i = maxSize; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    char arr[] = {};
    int maxSize = 5;

    int length = fillForward(arr, maxSize);

    std::cout << length;
    printReverse(arr, length);

    return 0;
}
