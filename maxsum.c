#include <stdio.h>
int main(){
	float x, y, z, sum = 0, max;
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	if(x > 0)
		sum += x;
	if(y > 0)
		sum += y;
	if(z > 0)
		sum += z;	
	if(!sum){
		max = x;
		if(y > max)
			max = y;
		if(z > max)
			max = z;
		sum = max;
	}
	printf("%f\n", sum);	
	return 0;
}

