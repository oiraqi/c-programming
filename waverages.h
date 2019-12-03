#define NSTUDENTS 3
#define NCOURSES 2

void g_fill(float grades[NSTUDENTS][NCOURSES]);
void w_fill(int weights[NCOURSES]);
void wa_compute(float grades[NSTUDENTS][NCOURSES], int weights[NCOURSES], float waverages[NSTUDENTS]);
void display(float waverages[NSTUDENTS]);
