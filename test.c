#include <stdio.h>
void twice(float x) {
	x *= 2; 
}
int main(void) {
	float x = 2;
	twice(++x);
	printf("%f", x);
	return 0;
}