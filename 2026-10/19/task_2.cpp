#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    std::cout << "argc=" << argc << "\n";
    std::cout << "program=" << argv[0] << "\n";

    if (argc < 3) {
        return 1;
    }

    try {
        int sum = 0;

        for (int i = 1; i < argc; i++) {
            int x = std::stoi(argv[i]);
            sum += x;
            std::cout << "argv[" << i << "]=" << x << "\n";
        }

        std::cout << "sum=" << sum << "\n";
    } catch (const std::invalid_argument &e) {
        return 1;
    } catch (const std::out_of_range &e) {
        return 1;
    }

    return 0;
}
