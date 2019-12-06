#include <string.h>
#include <stdio.h>
#include "library.h"

void add_book(book_t* library[], const book_t *bookp, int index){
    library[index] = bookp;
}

int contains_keyword(char *title, char *keyword) {
    printf("Comparing %s against %s\n", title, keyword);
    if (strlen(title) < strlen(keyword))
        return 0;
    if (strlen(title) == strlen(keyword))
        return !strcmp(title, keyword);
    if (!strncmp(title, keyword, strlen(keyword)))
        return 1;
    
    return contains_keyword(++title, keyword);
}

int search_book_by_keyword(book_t* library[], char *keyword, int index) {
    int i;
    for (i=0; i<index; i++)
        if (contains_keyword(library[i]->title, keyword))
            return i;
    return -1;
}

int compute_total_number_pages(book_t* library[], int index) {
    int i, total = 0;
    for (i=0; i<index; i++)
        total += library[i]->np;

    return total;
}