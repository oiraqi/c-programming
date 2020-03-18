#include <stdio.h>

int main() {
    float grade;

    printf ("Enter your grade [0 - 100]: ");
    scanf("%f", &grade);

    if (grade < 0 || grade > 100) {
        printf("Grade must be between 0 and 100\n");
    } else if (grade == 100) {
        printf("A\n");
    } else if (grade < 60) {
        printf("F\n");
    } else {
        printf("%c\n", 'J' - (int)grade / 10);
    }
    
    return 0;
}