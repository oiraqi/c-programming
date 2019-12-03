#include <stdio.h>

int main(void){
	int n, index, fact = 1;
	printf("Please enter your number: ");
	scanf("%d", &n);
	index = n;
	while(index > 0){
		fact *= index;
		index--;
	}
	printf("%d! = %d\n", n, fact);
	return 0;
}
