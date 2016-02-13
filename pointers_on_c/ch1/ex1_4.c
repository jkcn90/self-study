/* Reads input lines one by one until EOF is reached, then prints only the
   longest line. Assumes no input line is longer than MAX_LINE characters.
*/
#include <stdio.h>
#define MAX_LINE 1000

int main(void) {
    int i;
    int ch;
    int line[MAX_LINE];
    int max_line[MAX_LINE];
    int line_length;
    int max_line_length;

    line_length = 0;
    max_line_length = 0;

    while((ch = getchar()) != EOF) {
        if ((ch == '\n') || (line_length >= MAX_LINE)) {
            if (line_length > max_line_length) {
                for (i = 0; i < line_length; i++)
                    max_line[i] = line[i];
                max_line_length = line_length;
            }
            line_length = 0;
            continue;
        }

        line[line_length] = ch;
        line_length += 1;
    }

    if (max_line_length > 0) {
        for (i = 0; i < max_line_length; i++)
            putchar(max_line[i]);
        putchar('\n');
    }
}
