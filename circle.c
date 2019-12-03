#include <stdio.h>

#define PI 3.14159

int main(void){
	float area, perimeter, radius, pi, difference = 0;
	int n, counter = 0;
	
	printf("Please enter the # of circles: ");
	scanf("%d", &n);
	for(; counter < n; counter++){ /* For loop */
		printf("Please enter the radius of your circle: ");
		scanf("%f", &radius);

		/*PI = 7.6; This is an error as PI has been declared as a constant */

		area = PI * radius * radius;
		perimeter = 2 * PI * radius;
	
		pi = PI;

		printf("The area of your circle is: %f\n", area);
		printf("The perimeter of your circle is: %f\n", perimeter);
		printf("The value of Pi is: %f\n", pi);
		if(area < perimeter){
			printf("Perimeter is larger than area\n");
			difference = (perimeter/area - 1) * 100;
			/*printf("The difference is %f\n", difference);*/
		}
		else if(area > perimeter){
			printf("Area is larger than perimeter\n");
			difference = (area/perimeter - 1) * 100;
			/*printf("The difference is %f\n", difference);*/
		}
		else
			printf("Perimeter and area are equal\n");

		printf("The difference is %f\n", difference);
	}
	printf("We've helped you compute the area and perimeter of %d circles\n", n);
	return 0;
}

