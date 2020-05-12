#include <stdio.h>
#include <string.h>

int convert(const char *message, int numbers[]) {
    long length = strlen(message);
    int i, n, k = length % sizeof(int), *p = (int *)message;
    char *temp;

    if (k)
        length += sizeof(int) - k;
    n = length / sizeof(int);

    for (i = 0; i < n - 1; i++, p++)
        numbers[i] = *p;

    /**
     * Handle the last number with caution.
     * Remove the \n and make sure to add \0 in the end.
     */
    temp = (char *)p; /* Revert back to characters */
    numbers[n - 1] = 0;
    i = 1;
    while(*temp != '\n') {
        numbers[n - 1] += *temp * i;
        i *= 256;
        temp++;
    }

    return n;
}

void generate(int n, int numbers[]) {

    int i, occurence = 1;
    char line[100];
    FILE *fin = fopen("code.tpl", "r");
    FILE *fout = fopen("code.c", "w");

    while (fgets(line, 100, fin)) {
        i = strcspn(line, "?");
        if (i == strlen(line)) { /* line does not contain ? */
            fputs(line, fout);
            continue;
        }
        line[i] = '\0'; /* i is the index of ?. Remove ? and ignore any subsequent characters */
        fputs(line, fout);
        if (occurence == 1) /* First ? */
            fprintf(fout, "%d\n", n);
        else if (occurence == 2) { /* Second ? */
            fprintf(fout, "{");
            fprintf(fout, "%d", numbers[0]);
            for (i = 1; i < n; i++) {
                fprintf(fout, ", %d", numbers[i]);
            }
            fprintf(fout, "};\n");
        }
        occurence++;
    }

    fclose(fout);
    fclose(fin);
}