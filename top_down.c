#include <stdio.h>
#include "prime_fib.h"

int main(void) {
	int n, i;
	long sum = 0;
	scanf("%d", &n);

	for(i=1; i<=n; i++) {
		if(is_prime(i)) {
			sum += fib(i);
		}
	}

	printf("%ld\n", sum);
	return 0;
}
