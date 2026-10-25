#include <iostream>

static void sumAndMult(const int arr[], int n, long long &sum, long long &mult) {
    for (int i = 0; i < n; i++) {
        int el = arr[i];

        sum += el;
        mult *= el;
    }
}

int main() {
    int arr[] = {};

    bool running = true;
    int i = 0;
    while (running) {
        int x;
        std::cin >> x;
        if (std::cin.fail()) {
            std::cerr << "input fail\n";
            return 1;
        }

        if (x == 0) {
            running = false;
            continue;
        }

        arr[i] = x;
        i += 1;
    }

    if (i == 0) {
        std::cerr << "sequence is empty\n";
        return 2;
    }


    long long sum = 0;
    long long mult = 1;
    sumAndMult(arr, i, sum, mult);

    std::cout << "Sum = " << sum << ", Mult = " << mult << "\n";

    return 0;
}
