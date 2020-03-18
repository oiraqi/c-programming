#include <stdio.h>

int main() {
    int n;
    unsigned int sum = 0;

    do {        
        printf("Enter a positive number: ");
        scanf("%d", &n);
        sum += n;
    } while (n >= 0);
    
    printf("Sum is: %d\n", sum - n);
    return 0;
}