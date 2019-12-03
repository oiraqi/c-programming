#include <stdio.h>
int main(){
	float grade;
	scanf("%f", &grade);
	if(grade >= 90){
		printf("%c\n", 'A');
	}
	else if(grade >= 80)
		printf("%c\n", 'B');
	else if(grade >= 70)
		printf("%c\n", 'C');
	else if(grade >= 60)
		printf("%c\n", 'D');
	else
		printf("%c\n", 'F');
	
	return 0;
}

