#include <iostream>

class Stud {
private:
    int age_;

public:
    Stud() {
        age_ = 0;
    }

    int getAge() const {
        return age_;
    }

    void setAge(int age) {
        if (age < 0 || age > 100) {
            std::cerr << "Error: age ot 0 do 100!" << '\n';
            return;
        }
        age_ = age;
    }
};

int main() {
    Stud st;

    st.setAge(20);
    std::cout << "Age: " << st.getAge() << '\n';

    st.setAge(-5);
    std::cout << "Age befor error: " << st.getAge() << '\n';

    const Stud s;
    std::cout << "Age const:" << s.getAge() << '\n';

    return 0;
}
