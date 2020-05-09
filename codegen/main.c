/***
 * Author: Omar IRAQI
*/
#include <stdio.h>
#include "header.h"

#define MAXLENGTH 400
#define NMAX 100

int main(void) {
    char message[MAXLENGTH];
    int n, numbers[NMAX];
    /**
     * Read message from the user.
     */
    printf("Enter a message: ");
    fgets(message, MAXLENGTH, stdin);

    /**
     * Convert message (input parameter) to numbers (output parameter).
     * Return the number of these numbers.
     */
	n = convert(message, numbers);

    /**
     * Generate code.c from template code.tpl,
     * based on the given n and numbers (input parameters)
     */
    generate(n, numbers);

    /**
     * Lines 23 and 29 could be merged as (without the need for n):
     * generate(convert(message, numbers), numbers);
     */

    return 0;
}
