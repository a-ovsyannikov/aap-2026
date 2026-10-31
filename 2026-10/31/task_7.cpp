#include <iostream>

struct Book {
    char title[100];
    char author[50];
    int year;
};

Book **createAuthorBooksArray(const Book *books, size_t total,
                              const char *targetAuthor, size_t &count) {
    Book **arr = new Book *[count]{};
    int maxIdx = 0;

    for (size_t i = 0; i < total; i++) {
        Book book = books[i];
        if (strcmp(book.author, targetAuthor) == 0) {
            arr[maxIdx] = &book;
        }
    }

    return arr;
}

int main() {
    Book library[3] = {
        Book{"1984", "Джордж Оруэлл", 1949},
        Book{"Generation П", "Виктор Пелевин", 1999},
        Book{"Empire v", "Виктор Пелевин", 2006},
    };
    size_t total = sizeof(library) / sizeof(library[0]);
    size_t count = 2;

    Book **booksByPelevin = createAuthorBooksArray(
        library, total, "Виктор Пелевин", count
    );

    return 0;
}
