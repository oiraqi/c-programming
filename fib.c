#include <stdio.h>

int main(void){
	int n, i = 2;
	unsigned long f1 = 0, f2 = 1, f3;
	printf("Please enter a number: ");
	scanf("%d", &n);
	if(n == 0)
		printf("F0 = %ld\n", f1);
	else if(n == 1)
		printf("F1 = %ld\n", f2);
	else{
		while(i < n + 1){
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			printf("F%d = %ld\n", i, f3);
			i++;
		}
		/*printf("F%d = %d\n", n, f3);*/
	}
	return 0;
}
