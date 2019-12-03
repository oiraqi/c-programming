#include <stdio.h>
#include "functions.h"

int main(void){
	int n;
	unsigned long x, y;
	scanf("%d", &n);
	x = fib(n);
	y = rfib(n);
	printf("Fib(%d) = %ld\n", n, x);
	printf("RFib(%d) = %ld\n", n, y);
	printf("%d\n", is_prime(x));
	printf("%d! = %d\n", n, fact(n));
	printf("Max of %d and %ld is: %f\n", n, x, max(n, x));
	return 0;
}

