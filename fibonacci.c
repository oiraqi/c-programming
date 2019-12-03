#include <stdio.h>
#define F0 0
#define F1 1

int main(void){
	int n, i = 2;
	long long f0 = F0, f1 = F1, f2;
	scanf("%d", &n);
	if(!n){
		printf("%lld", f0);
		return 0;
	}
	if(n == 1){
		printf("%lld", f1);
		return 0;
	}
	
	while(i <= n){
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		printf("F(%d) = %lld\n", i++, f2);
	}
	return 0;
}

