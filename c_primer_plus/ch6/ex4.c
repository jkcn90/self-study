#include <stdio.h>
int main(void)
{
    int i, j;
    char letter;
    for (i = 0, letter = 'A'; i < 6; i++)
    {
        for (j = 0; j <= i; j++, letter++)
            printf("%c", letter);
        printf("\n");
    }
    return 0;
}
