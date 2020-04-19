#include <stdio.h>
#include "prime_fib.h"

int main(void) {
	int n, i, check;
	long sum = 0;
	scanf("%d", &n);

    
	for(i=1; i<=n; i++) {
        check = is_prime(i);
		if(check) {
			sum += fib(i);
		}
	}

	printf("%ld\n", sum);
	return 0;
}
