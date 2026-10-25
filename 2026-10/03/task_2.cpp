#include <iostream>

int main() {
    int data[8] = {3, 1, 4, 1, 5, 9, 2, 6};
    const int (*p)[8] = &data;

    int sum = 0;
    float mx = -INFINITY;
    int maxIndex = 0;

    for (int i = 0; i < 8; i++) {
        int el = (*p)[i];
        sum += el;
        auto f_el = static_cast<float>(el);

        if (mx < f_el) {
            mx = f_el;
            maxIndex = i;
        }

        std::cout << el << " ";
    }
    std::cout << "\n---------------\n";

    std::cout << "sum = " << sum << "\n";
    std::cout << "max = " << mx << "\n";
    std::cout << "max index = " << maxIndex << "\n";

    return 0;
}
