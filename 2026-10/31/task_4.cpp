#include <iostream>

struct Book {
    char title[100];
    char author[50];
    int year;
};

static size_t countBooksAfterYear(const Book *books, size_t total, int minYear) {
    size_t count = 0;

    for (size_t i = 0; i < total; i++) {
        if (books[i].year > minYear) {
            count++;
        }
    }

    return count;
}

int main() {
    Book library[3] = {
        Book{"1984", "Джордж Оруэлл", 1949},
        Book{"Generation П", "Виктор Пелевин", 1999},
        Book{"Empire v", "Виктор Пелевин", 2006},
    };
    size_t total = sizeof(library) / sizeof(library[0]);
    int minYear = 1998;

    size_t count = countBooksAfterYear(library, total, minYear);
    std::cout << count << "\n";

    return 0;
}
