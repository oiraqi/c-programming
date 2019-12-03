#include <stdio.h>

int main(void){
	int n, c = 0, base;
	printf("Please enter your number: ");
	scanf("%d", &n);
	printf("Please enter your base: ");
	scanf("%d", &base);
	while(n%base == 0 && n > 1){
		n /= base;
		c++;
	}
	if(n == 1)
		printf("Your number is a power of %d, and the exponent is: %d\n", base, c);
	else
		printf("Your number is NOT a power of %d\n", base);
	return 0;
}
