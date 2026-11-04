#include <iostream>

class A {
private:
    int x_;
public:
    A(int x) {
        x_ = x;
        std::cout << "+" << x_ << "\n";
    }

    ~A() {
        std::cout << "-" << x_ << "\n";
    }
};

int main() {
    A a(1);
    A b(2);
    A c(3);

    return 0;
}
