/* Reads from standard input, then echos the line back with its line number
   preceeding it. This program has no built-in limit on how long a line it can 
   handle.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ch;
    int line;
    int at_beginning;

    line = 0;
    at_beginning = 1;

    while((ch = getchar()) != EOF) {
        if (at_beginning == 1) {
            at_beginning = 0;
            printf("%d: ", ++line);
        }

        putchar(ch);
        if (ch == '\n')
            at_beginning = 1;
    }
}
