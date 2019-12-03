#include <stdlib.h>
#include <stdio.h>
#include "utypes.h"

int main(void) {
    book_t *book = (book_t*)malloc(sizeof(book_t));
    book->name = "WTC";
    book->name = "WTC1";
    printf("%s\n", book->name);
}
