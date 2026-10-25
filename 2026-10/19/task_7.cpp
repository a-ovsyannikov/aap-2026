#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        return 1;
    }

    std::ifstream file_input(argv[1]);
    std::ofstream file_output(argv[2]);
    if (!file_input.is_open() || !file_output.is_open() || file_input.eof()) {
        return 1;
    }

    try {
        int cnt = 0;
        float x = INFINITY;
        float sum = 0;
        float mx = -INFINITY;
        float mn = INFINITY;

        while (file_input >> x) {
            sum += x;
            cnt += 1;

            if (mx < x) {
                mx = x;
            }
            if (mn > x) {
                mn = x;
            }
        }

        if (cnt == 0) {
            return 2;
        }

        file_output << "min=" << mn << "\n";
        file_output << "max=" << mx << "\n";
        file_output << "avg=" << sum / static_cast<float>(cnt) << "\n";

        if (!file_output) {
            return 1;
        }
        if (!file_input.eof()) {
            return 1;
        }
    } catch (const std::invalid_argument &e) {
        return 1;
    } catch (const std::out_of_range &e) {
        return 1;
    }

    file_input.close();
    file_output.close();
    return 0;
}
