#include <fstream>
#include <iostream>
#include "matrix.h"

int main(int argc, char *argv[]) {
    if (argc < 5) {
        std::cerr << "usage: <input> <output> <mode> <variant>";
        return 1;
    }

    std::ifstream file_input(argv[1]);
    std::ofstream file_output(argv[2]);
    if (!file_input.is_open() || !file_output.is_open() || file_input.eof()) {
        return 1;
    }

    const char *mode = argv[3];
    const int variant = std::stoi(argv[4]);
    if (!mode || variant == 0) {
        return 1;
    }

    int rows, cols = 0;
    file_input >> rows >> cols;
    std::stack<std::stack<int> > matrix;

    for (int i = 0; i < rows; i++) {
        matrix.emplace();

        for (int j = 0; j < cols; j++) {
            int number;
            file_input >> number;
            matrix.top().push(number);
        }
    }

    return 0;
}
