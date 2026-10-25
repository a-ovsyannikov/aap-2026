#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("data.txt");
    if (!file.is_open()) {
        return 1;
    }

    int x;
    while (file >> x) {
        std::cout << x << "\n";
    }

    file.close();
    return 0;
}
