#include <iostream>

static void countPosNeg(const int arr[], int n, int &negCount) {
    for (int i = 0; i < n; i++) {
        int el = arr[i];
        if (el < 0) {
            negCount += 1;
        }
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


    int negCount = 0;
    countPosNeg(arr, i, negCount);

    std::cout << "negCount = " << negCount << "\n";

    return 0;
}
