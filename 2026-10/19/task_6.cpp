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

    for (int i = 0; i <= 10; i++) {
        file << i << " ";
        if (i % 5 == 0) file << "\n";
    }

    if (!file) {
        return 1;
    }

    file.close();
    std::cout << "done" << "\n";
    return 0;
}
