#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        return 1;
    }

    int x;
    while (file >> x) {
        std::cout << x << "\n";
    }

    if (!file.eof()) {
        return 1;
    }

    file.close();
    return 0;
}
