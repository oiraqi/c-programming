#include <stdio.h>
#define PI 3.14152

int main(){
	float r, circumference, area;
	printf("Please enter the radius: ");
	scanf("%f", &r);
	circumference = 2 * PI * r;
	/*
	This is a comment
	*/
	area = PI * r * r;
	printf("The circumference is: %f\nThe area is: %f\n", circumference, area);
	return 0;
}

