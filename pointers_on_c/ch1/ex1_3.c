/* This program reads characters from stdin and writes them to stdout.
   At the end of each line, a checksum is also printed.
*/
#include <stdio.h>

int main(void) {
    int ch;
    signed char checksum;

    checksum = -1;

    while ((ch = getchar()) != EOF) {
        checksum += ch;

        if (ch == '\n')
            printf(" (checksum: %d)", checksum);
        putchar(ch);
    }
}
