#include <iostream>

class DynamicInts {
private:
    int *data_;
    int size_;

public:
    DynamicInts(int size) {
        if (size < 0) {
            throw std::invalid_argument("size must be bigger than zero");
        }
        size_ = size;
        data_ = new int[size_];


        for (int i = 0; i < size_; ++i) {
            data_[i] = 0;
        }

        std::cout << "Constructor " << size_ << std::endl;
    }

    ~DynamicInts() {
        delete[] data_;
        std::cout << "Destructor" << std::endl;
    }
};

int main() {
    DynamicInts arr(100);
    return 0;
}
