#include <iostream>

static void minAndMax(const int arr[], int n, int &minVal, int &maxVal) {
    for (int i = 0; i < n; i++) {
        int el = arr[i];
        if (minVal > el) {
            minVal = el;
        }
        if (maxVal < el) {
            maxVal = el;
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


    int min = INFINITY;
    int max = -INFINITY;
    minAndMax(arr, i, min, max);

    std::cout << "min = " << min << ", max = " << max << "\n";

    return 0;
}
