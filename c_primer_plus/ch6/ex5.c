#include <stdio.h>
int main(void)
{
    int count, i;
    char letter, last_letter, j;
    printf("Enter an uppercase letter: ");
    scanf("%c", &last_letter);

    for (letter = 'A', count = last_letter - letter; letter <= last_letter;
         letter++, count--)
    {
        for (i = 0; i < count; i++)
            printf(" ");

        for (j = 'A'; j < letter; j++)
        {
            printf("%c", j);
        }

        for (j = letter; j >= 'A'; j--)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
