#include <stdio.h>
#include "library.h"
#define SIZE 100

int main(void) {
    int findex, index = 0;
    book_t* library[SIZE];
    book_t book1 = {.title = "Cent ans de solitude", .np = 200, .author = "Gabriel Garcia Marquez", .edition = 1980};
    book_t book2 = {.title = "La Peste", .np = 200, .author = "Albert Camus", .edition = 1988};
    book_t book3 = {.title = "Homo Sapiens, A brief history of humankind", .np = 200, .author = "Noah Harari", .edition = 1980};
    book_t book4 = {.title = "The origin of species", .np = 200, .author = "Charles Darwin", .edition = 1980};
    add_book(library, &book1, index++);
    add_book(library, &book2, index++);
    add_book(library, &book3, index++);
    add_book(library, &book4, index++);
    findex = search_book_by_keyword(library, "Peste", index);
    if (findex >= 0)
        printf("Found at %d\n", findex + 1);
    else
        printf("Not found\n");
    
    printf("Half of total number of pages is: %f\n", (float)compute_total_number_pages(library, index) / 2);
}
