#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 1) {
        std::cerr << "n must be bigger than 0\n";
        return 1;
    }

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;

        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    std::cout << sum << " " << product << "\n";

    delete[] arr;
    arr = nullptr;

    return 0;
}
