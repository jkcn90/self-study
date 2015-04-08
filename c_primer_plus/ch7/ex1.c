#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int number_of_spaces = 0;
    int number_of_newlines = 0;
    int number_of_non_whitespace_characters = 0;

    while ((ch = getchar()) != '#')
    {
        if (isspace(ch) && (ch != '\n'))
            number_of_spaces++;
        else if (ch == '\n')
            number_of_newlines++;
        else
            number_of_non_whitespace_characters++;
    }
    printf("Spaces entered: %d\n", number_of_spaces);
    printf("New lines entered: %d\n", number_of_newlines);
    printf("Characters entered: %d\n", number_of_non_whitespace_characters);

    return 0;
}
