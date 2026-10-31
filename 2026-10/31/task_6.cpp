#include <iostream>

struct Book {
    char title[100];
    char author[50];
    int year;
};

static void findMostProlificAuthor(const Book *books, size_t total) {
    int maxCount = 0;
    const char *mostProlificAuthor = nullptr;

    for (size_t i = 0; i < total; i++) {
        auto firstAuthor = books[i].author;

        int count = 0;
        for (size_t j = 0; j < total; j++) {
            auto secondAuthor = books[j].author;

            if (strcmp(firstAuthor, secondAuthor) == 0) {
                count += 1;
            }
        }

        if (count > maxCount) {
            mostProlificAuthor = firstAuthor;
        }
    }

    if (mostProlificAuthor == nullptr) {
        throw std::invalid_argument("books list is empty");
    }

    std::cout << mostProlificAuthor << "\n";
}

int main() {
    Book library[3] = {
        Book{"1984", "Джордж Оруэлл", 1949},
        Book{"Generation П", "Виктор Пелевин", 1999},
        Book{"Empire v", "Виктор Пелевин", 2006},
    };
    size_t total = sizeof(library) / sizeof(library[0]);

    findMostProlificAuthor(library, total);
    return 0;
}
