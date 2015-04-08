#include <stdio.h>
int main(void)
{
    char ch;
    char previous_character;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        if ((previous_character == 'e') && (ch =='i'))
            count++;
        previous_character = ch;
    }
    printf("The sequence \'ei\', occured %d times.\n", count);

    return 0;
}
