/* Write a program that will read C source code from stdin and ensure that the
   braces are paried correctly.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ch;
    int braces;
    
    braces = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '{')
            braces +=1;
        if (ch == '}') {
            if (braces == 0) {
                printf("Extra closing brace\n");
            } else {
                braces -=1;
            }
        }
    }

    if (braces > 0)
        printf("Unmatched openning brace\n");
    return EXIT_SUCCESS;
}
