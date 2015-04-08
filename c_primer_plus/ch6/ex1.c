#include <stdio.h>

int main(void)
{
    int i;
    char letter;
    char array[26];
    for (letter = 'a', i = 0; letter < 'z'; letter++, i++)
        array[i] = letter;

    for (i = 0; i < 26; i++)
        printf("%c", array[i]);
    printf("\n");

    return 0;
}
