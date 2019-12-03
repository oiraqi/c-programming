#include <stdio.h>
#include "library.h"
#define SIZE 100

int main(void) {
    int index = 0;
    book_t* library[SIZE];
    book_t b, book = {.title = "Cent ans de solitude", .np = 200, .author = "Gabriel Garcia Marquez", .edition = 1980};
    b = book;
    add_book(library, &b, index++);
    printf("%s\n", library[0]->title);
}
