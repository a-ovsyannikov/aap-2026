//
// Created by Андрей on 21.09.2026.
//

#include <iostream>
#include <vector>

static int calcSum(const std::vector<int> &arr) {
    int sum = 0;

    for (int x : arr) {
        sum += x;
    }

    return sum;
}

static double calcAverage(int n, int sum) {
    return static_cast<double>(sum) / static_cast<double>(n);
}

static void printAverage(double average) {
    std::cout << "average=" << average;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;

        arr[i] = number;
    }

    int sum = calcSum(arr);
    float f = calcAverage(n, sum);
    printAverage(f);

    return 0;
}
