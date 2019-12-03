#include <stdio.h>

int main(void) {
    char *message = "Hello World!";
    int *p = (int*)message;
    printf("%p\n", message);
    printf("%s\n", message);
    printf("%d\n", *p);
    return 0;
}
