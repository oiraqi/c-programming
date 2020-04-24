/***
 * Author: Omar IRAQI
*/

#include <stdio.h>
#include <stdlib.h>
#define N 11

int main(void) {
    int i, *p, encoded_message[] = {1634558290, 544104804, 1701994827, 539782501, 1918985572, 
                                1970565920, 1953391972, 1226845811, 1936289056, 1870209139, 8565};
    char *message;
    
    printf("%s\n", (char*)encoded_message);

	/**
     * Let's say it again!
     */
    message = (char*)malloc(N * sizeof(int));
    p = (int*)message;

    for (i=0; i < N; i++, p++)
        *p = encoded_message[i];
    
    printf("%s\n", message);
    return 0;
}
