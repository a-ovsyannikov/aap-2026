#include <iostream>

class Point {
private:
    int x_, y_;

public:
    Point() {
        this->x_ = 0;
        this->y_ = 0;
    }

    Point(int x, int y) {
        this->x_ = x;
        this->y_ = y;
    }

    int getX() const {
        return this->x_;
    }

    void setX(int x) {
        this->x_ = x;
    }

    int getY() const {
        return this->y_;
    }

    void setY(int y) {
        this->y_ = y;
    }
};

int main() {
    Point a = Point();
    a.setX(10);
    a.setY(20);
    Point b = Point();
    b.setX(100);

    return 0;
}
