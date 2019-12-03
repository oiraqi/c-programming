typedef struct {
    char *name;
    char *isbn;
    char *author;
    short n_pages;
    short n_chapters;
} book_t;

typedef struct {
    book_t *books; 
} library_t;
