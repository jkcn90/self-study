#include <stdio.h>

int main(void)
{
    int ch;
    int num_uppercase = 0;
    int num_lowercase = 0;
    int num_other = 0;

    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'a') && (ch <= 'z'))
        {
            num_lowercase++;
        } else if ((ch >= 'A') && (ch <= 'Z'))
        {
            num_uppercase++;
        } else
        {
            num_other++;
        }
    }
    printf("Number of uppercase letters: %d\n", num_uppercase);
    printf("Number of lowercase letters: %d\n", num_lowercase);
    printf("Number of other letters: %d\n", num_other);

    return 0;
}
