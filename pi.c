#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long n = 1000000000, i, count = 0;
    double x, y;
    for (i = 0; i < n; i++) {
        x = (double)rand() / (double)RAND_MAX * 2 - 1;
        y = (double)rand() / (double)RAND_MAX * 2 - 1;

        if (x*x + y*y <= 1)
            count++;
    }
    printf("%lf\n", 4 * (double)count / n);
}