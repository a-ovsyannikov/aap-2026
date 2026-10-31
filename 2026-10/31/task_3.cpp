#include <iostream>

struct Point {
    int x, y;

    double distSquared(const Point &other) const {
        return pow(other.x - x, 2) + pow(other.y - y, 2);
    }

    void move(const int dx, const int dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    Point a = Point{0, 0};
    Point b = Point{3, 4};

    std::cout << a.distSquared(b) << "\n";

    a.move(2, -1);
    std::cout << a.distSquared(b) << "\n";

    return 0;
}
