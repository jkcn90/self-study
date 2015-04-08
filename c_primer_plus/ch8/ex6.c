#include <stdio.h>
#include <stdbool.h>

bool is_white_space(char);
int main(void)
{
    int ch;
    while (ch = getchar(), !is_white_space(ch))
        printf("You entered: %c\n", ch);

    return 0;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;
}

bool is_white_space(char ch)
{
    return ((ch == '\n') || (ch == '\t') || (ch == ' '));
}
