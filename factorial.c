#include <stdio.h>

int main(void){
	int upper, i=1;
	unsigned long fact=1;
	scanf("%d", &upper);
	while(i <= upper){
		fact *= i;
		printf("%d! = %lu\n", i, fact);
		i++;
	}
	return 0;
}

