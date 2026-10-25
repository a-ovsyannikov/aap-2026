//
// Created by Андрей on 19.09.2026.
//

#include <iostream>
#include <string>

int main() {
    struct Student {
        std::string name;
        int age;
        double average;
    };

    Student s1 = Student{"Ivan", 18, 3.6};
    Student s2 = Student{"Petr", 17, 2.3};
    Student s3 = Student{"Dmitry", 20, 5.0};

    std::cout << "Name: " << s1.name << ", age: " <<
            s1.age << ", avg: " << s1.average << "\n";

    std::cout << "Name: " << s2.name << ", age: " <<
            s2.age << ", avg: " << s2.average << "\n";

    std::cout << "Name: " << s3.name << ", age: " <<
            s3.age << ", avg: " << s3.average << "\n";

    return 0;
}
