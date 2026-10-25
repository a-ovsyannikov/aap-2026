#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }

    std::ofstream file(argv[1]);
    if (!file.is_open()) {
        return 1;
    }

    file << "Hello, world!\n";
    file << "Number=" << 42 << "\n";
    file << "Pi=" << 3.14 << "\n";
    file.close();
    return 0;
}
