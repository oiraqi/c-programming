#include <stdio.h>
#include <string.h>

void fill(int array[], int n) {
	int i;
	for(i=0; i < 10; i++)
		array[i] = n;
}
 
int main(void){ 
 int array[10];
 fill(array, 7);
 return 0;
}
