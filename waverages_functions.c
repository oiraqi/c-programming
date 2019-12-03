#include <stdio.h>
#define NSTUDENTS 3
#define NCOURSES 2

void g_fill(float grades[NSTUDENTS][NCOURSES]){
	int i, j;
	printf("Please enter grades for\n");
	for(i=0; i < NSTUDENTS; i++){
		for(j=0; j < NCOURSES; j++){
			printf("Student %d / Course %d: ", i + 1, j + 1);
			scanf("%f", &grades[i][j]);
		}
		printf("\n");
	}
}

void w_fill(int weights[NCOURSES]){
	int i;
	printf("Please enter the weights of courses\n");
	for(i=0; i < NCOURSES; i++){
		printf("Course %d: ", i + 1);
		scanf("%d", &weights[i]);
	}
	printf("\n");
}

void wa_compute(float grades[NSTUDENTS][NCOURSES],
		int weights[NCOURSES], 
		float waverages[NSTUDENTS]){
	int i, j;	
	float sum, wsum = 0;
	for(i=0; i < NCOURSES; i++)
		wsum += weights[i];

	for(i=0; i < NSTUDENTS; i++){
		sum = 0;
		for(j=0; j < NCOURSES; j++)
			sum += grades[i][j] * weights[j];
		waverages[i] = sum / wsum;
	}
}

void display(float waverages[NSTUDENTS]){
	int i = 0;
	printf("Weighted averages\n");
	for(; i < NSTUDENTS; i++)
		printf("Student %d: %f\n", i + 1, waverages[i]);
	printf("\n");
}








