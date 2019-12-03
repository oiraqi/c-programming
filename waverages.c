#include "waverages.h"
#define NSTUDENTS 3
#define NCOURSES 2

int main(void){
	float grades[NSTUDENTS][NCOURSES], waverages[NSTUDENTS];
	int weights[NCOURSES];
	g_fill(grades);
	w_fill(weights);
	wa_compute(grades, weights, waverages);
	display(waverages);
	return 0;
}

