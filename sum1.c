#include <stdio.h>

int main() {
    int n = 0;
    unsigned int sum = 0;

    do {
        sum += n;
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while (n >= 0);

    printf("Sum: %d\n", sum);
    
    return 0;
}