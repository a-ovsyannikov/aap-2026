#include <iostream>

struct Book {
    char title[100];
    char author[50];
    int year;
};

static void printBooksByAuthor(const Book *books, size_t total, const char *targetAuthor) {
    bool found = false;

    for (size_t i = 0; i < total; i++) {
        Book book = books[i];

        if (strcmp(book.author, targetAuthor) == 0) {
            found = true;
            std::cout << book.title << "\n";
        }
    }
}

int main() {
    Book library[3] = {
        Book{"1984", "Джордж Оруэлл", 1949},
        Book{"Generation П", "Виктор Пелевин", 1999},
        Book{"Empire v", "Виктор Пелевин", 2006},
    };
    size_t total = sizeof(library) / sizeof(library[0]);
    char *targetAuthor = library[1].author;

    printBooksByAuthor(library, total, targetAuthor);

    return 0;
}
