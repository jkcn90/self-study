#include <stdio.h>
#include <stdbool.h>

void chline(char ch, int i, int j);
bool get_input(char * ch_p, int * i_p, int * j_p, int *status_p);

int main(void)
{
    int i, j;
    int status;
    char ch, excess_ch;

    while (get_input(&ch, &i, &j, &status))
    {
        excess_ch = getchar();
        if (excess_ch != '\n')
        {
            if (status == 2)
            {
                printf("Too many inputs.\n");
            } else
            {
                printf("Invalid input.\n");
            }

            while (getchar() != '\n');
            continue;
        }
        chline(ch, i, j);
    }
    printf("\nBye!\n");

    return 0;
}

bool get_input(char * ch_p, int * i_p, int * j_p, int *status_p)
{
    char ch;
    int i, j;
    int status;
    printf("Enter a character (ctrl+d to quit): ");
    ch = getchar();

    if (ch == EOF)
        return false;

    printf("Enter two integers, ");
    printf("(with the first smaller or equal to the second): ");
    status = scanf("%d %d", &i, &j);

    if (status == EOF)
        return false;

    *i_p = i;
    *j_p = j;
    *ch_p = ch;
    *status_p = status;

    return true;
}

void chline(char ch, int i, int j)
{
    int counter = 0;
    if (i > j)
    {
        printf("Invalid inputs: %d > %d.\n", i, j);
        return;
    }


    for (; counter < i; counter++)
        printf(" ");
    for (; i <= j; i++)
    {
        if (ch == '\n')
            printf("\\n");
        else if (ch == '\t')
            printf("\\t");
        else if (ch == '\a')
            printf("\\a");
        else
            printf("%c", ch);
    }
    printf("\n");
}
