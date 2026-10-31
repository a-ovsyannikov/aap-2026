#include <iostream>

struct Point {
    int x, y;

    int sumX(const Point &other) const {
        return x + other.x;
    }

    double distSquared(const Point &other) const {
        return pow(other.x - x, 2) + pow(other.y - y, 2);
    }
};

int main() {
    Point a = Point{0, 0};
    Point b = Point{3, 4};

    std::cout << a.sumX(b) << "\n";
    std::cout << a.distSquared(b) << "\n";

    return 0;
}
