/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>

void prompt(void);
int main(void)
{
    int ch;
    int min = 0;
    int max = 101;
    int guess = 50;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Uh...is your number %d?\n", guess);
    while (prompt(), (ch = getchar()) != 'y')
    {
        if (ch == 'h')
        {
            max = guess;
            guess = (guess + min) / 2;
            printf("Well, then, is it %d?\n", guess);
        } else if (ch == 'l')
        {
            min = guess;
            guess = (guess + max) / 2;
            printf("Well, then, is it %d?\n", guess);
        } else
        {
            printf("Invalid Input!\n");
        }

        while ((ch = getchar()) != '\n')
            continue;
    }
    printf("I knew I would do it!\n");
}

void prompt(void)
{
    printf("Respond with:\n\ty) if my guess is right\n");
    printf("\th) if it is too high.\n");
    printf("\tl) if it is too low.\n");
}
