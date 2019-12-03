#include "library.h"

void add_book(book_t* library[], const book_t *bookp, int index){
    library[index] = bookp;
}


int search_book_title(book_t library[], char*);