/***
 * Author: Omar IRAQI (updated)
*/

#include <stdio.h>
#include <stdlib.h>

#define SPACE 28

int main(void) {
    int i;
	int magical_numbers[] = {1668505926, 1952542313, 543649385,
			1919252581, 1702062435, 1734410273, 561210741};
    char *message = (char*)malloc(SPACE);
    int *p = (int*)message;

    for (i=0; i < 7; i++, p++)
        *p = magical_numbers[i];
   
    printf("%s\n", message);
    return 0;
}