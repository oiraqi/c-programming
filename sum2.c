#include <stdio.h>

int main() {
    int n = 0;
    unsigned int sum = 0;

    while (n >= 0) {
        sum += n;
        printf("Enter a positive number: ");
        scanf("%d", &n);
    }

    printf("Sum: %d\n", sum);
    
    return 0;
}