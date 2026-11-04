#include <iostream>
#include <cstring>
#include <stdexcept>

class Triangle {
private:
    double a_;
    double b_;
    double c_;
    char* name_;

    static bool isValidTriangle(double a, double b, double c) {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }

    static char* allocateAndCopy(const char* src) {
        char* dst = new char[std::strlen(src) + 1];
        std::strcpy(dst, src);
        return dst;
    }

public:
    Triangle()
        : a_(1.0), b_(1.0), c_(1.0), name_(allocateAndCopy("default")) {}

    Triangle(double a, double b, double c, const char* name)
        : a_(a), b_(b), c_(c), name_(nullptr) {
        if (!isValidTriangle(a, b, c)) {
            throw std::invalid_argument("Invalid triangle sides");
        }
        name_ = allocateAndCopy(name);
    }

    ~Triangle() {
        delete[] name_;
    }

    Triangle(const Triangle&) = delete;
    Triangle& operator=(const Triangle&) = delete;

    double perimeter() const {
        return a_ + b_ + c_;
    }

    const char* getName() const {
        return name_;
    }
};

int main() {
    try {
        Triangle t1;
        std::cout << t1.getName() << ": " << t1.perimeter() << "\n";

        Triangle t2(3.0, 4.0, 5.0, "test");
        std::cout << t2.getName() << ": " << t2.perimeter() << "\n";

        Triangle t3(1.0, 2.0, 10.0, "inv");
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }

    return 0;
}