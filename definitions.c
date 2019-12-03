#include "functions.h"

void init(void){
	int i = 0;
	for(; i< MAX_SEQUENCE; i++)
		fib_numbers[i] = 0;
}

int is_prime(unsigned long n){
	int i = 2;
	while(i < n){
		if(n%i == 0)
			return 0;
		i++;
	}
	return 1;
}

unsigned long fib(int n){
	int i = 2;
	unsigned long f1 = 0, f2 = 1, f3;
	if(n == 0)
		return f1;
	if(n == 1)
		return f2;
	while(i < n + 1){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		i++;
	}	
	return f3;
}

unsigned long rfib(int n){
	if(!n || n == 1)
		return n;

	return rfib(n - 1) + rfib(n - 2);
}

unsigned long rfib_optimized(int n){
	if(!n || n == 1)
		return n;

	if(!fib_numbers[n - 1])
		fib_numbers[n - 1] = rfib_optimized(n - 1) + rfib_optimized(n - 2);

	return fib_numbers[n - 1];
}

int fact(int n){
	if(!n)
		return 1;
	return n * fact(n - 1);
}

float max(float x, float y){
	return (x >= y)? x:y;
}

float min(float x, float y){
	return (x <= y)? x:y;
}

