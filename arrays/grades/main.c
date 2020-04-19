#include <stdio.h>
#define N_COURSES 6
int main() {
    float grade[N_COURSES], grade_sum = 0;
    int coefficient[N_COURSES];
    int coefficient_sum = 0;
    int i;

    for (i=0; i < N_COURSES; i++) {
        printf("Enter grade of course %d: ", i + 1);
        scanf("%f", &grade[i]);

        printf("Enter coefficient of course %d: ", i + 1);
        scanf("%f", &coefficient[i]);
    }

    for (i=0; i < N_COURSES; i++) {}

        grade_sum += grade[i] * coefficient[i];
        coefficient_sum += coefficient[i];
    }

    /*Should normally make sure that coefficient_sum is != 0 */
    printf("GPA: %.2f\n", grade_sum / coefficient_sum);
}