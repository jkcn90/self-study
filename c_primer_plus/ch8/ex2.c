#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        printf("(");
        if (ch == '\n')
        {
            printf("\\n");
        } else if (ch == '\t')
        {
            printf("\\t");
        } else if (ch < ' ')
        {
            printf("^%c", ch + 'A' - 1);
        } else
        {
            printf("%c", ch);
        }

        printf(" ASCII: %d)", ch);

        if ((count < 9) && (ch != '\n'))
        {
            printf(" ");
            count++;
        } else
        {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}
