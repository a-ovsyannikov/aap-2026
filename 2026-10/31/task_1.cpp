#include <iostream>

struct Point {
    int x, y;
};

static double distSquared(const Point &a, const Point &b) {
    return pow(b.x - a.x, 2) + pow(b.y - a.y, 2);
}

int main() {
    Point a = Point{0, 0};
    Point b = Point{3, 4};

    std::cout << distSquared(a, b) << "\n";

    return 0;
}
