typedef struct {
    char *title;
    char *author;
    int np;
    int edition;
} book_t;

void add_book(book_t* library[], const book_t*, int);
int search_book_title(book_t library[], char*);
