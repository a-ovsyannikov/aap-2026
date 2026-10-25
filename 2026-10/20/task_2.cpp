#include <iostream>
#include <fstream>
#include <string>

static bool readSizes(std::ifstream& in, int& rows, int& cols) {
    if (!(in >> rows >> cols)) {
        return false;
    }
    return rows > 0 && cols > 0;
}

static int** createMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

static void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

static bool readToDyn(std::ifstream& in, int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (!(in >> matrix[i][j])) {
                return false;
            }
        }
    }
    return true;
}

static long long sumSecondaryDiagonal(int** matrix, int rows, int cols) {
    long long sum = 0;
    int limit = (rows < cols) ? rows : cols;

    for (int i = 0; i < limit; ++i) {
        sum += matrix[i][cols - 1 - i];
    }
    return sum;
}

int main(int argc, char* argv[]) {
    if (argc != 5) {
        std::cerr << "Usage: " << argv[0] << " <input> <output> <mode> <variant>\n";
        return 1;
    }

    std::string inputFile = argv[1];
    std::string outputFile = argv[2];
    std::string mode = argv[3];
    std::string variant = argv[4];

    if (mode != "dyn") {
        std::cerr << "ERROR: mode must be 'dyn'\n";
        return 1;
    }
    if (variant != "2") {
        std::cerr << "ERROR: variant must be '2'\n";
        return 1;
    }

    std::ifstream in(inputFile);
    if (!in) {
        std::cerr << "ERROR: cannot open " << inputFile << "\n";
        return 1;
    }

    int rows = 0, cols = 0;
    if (!readSizes(in, rows, cols)) {
        std::cerr << "ERROR: invalid sizes\n";
        return 1;
    }

    int** matrix = createMatrix(rows, cols);

    if (!readToDyn(in, matrix, rows, cols)) {
        std::cerr << "ERROR: bad matrix element\n";
        freeMatrix(matrix, rows);
        return 1;
    }

    long long sum = sumSecondaryDiagonal(matrix, rows, cols);

    std::ofstream out(outputFile);
    if (!out) {
        std::cerr << "ERROR: cannot open " << outputFile << "\n";
        freeMatrix(matrix, rows);
        return 1;
    }
    out << sum << "\n";

    freeMatrix(matrix, rows);

    return 0;
}