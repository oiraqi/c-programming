/***
 * Author: Omar IRAQI
*/

#include <stdio.h>
#include <stdlib.h>
#define N ?

int main(void) {
    int i, *p, encoded_message[] = ?;
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
