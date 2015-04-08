#include <stdio.h>
#include <stdbool.h>

void print_character_line(char ch, int n);
void print_character_lines(char ch, int n, int num_lines);
bool get_inputs(char * ch_p, int * n_p, int * num_lines_p, int * status_p);

int main(void)
{
    char ch, excess_ch;
    int n, num_lines;
    int status;

    while(get_inputs(&ch, &n, &num_lines, &status))
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
        print_character_lines(ch, n, num_lines);
    }
    printf("\nBye!\n");

    return 0;
}

bool get_inputs(char * ch_p, int * n_p, int * num_lines_p, int * status_p)
{
    char ch;
    int status;
    int n, num_lines;

    printf("Enter a character (ctrl+d to quit): ");
    ch = getchar();

    if (ch == EOF)
        return false;

    printf("Enter two integers: ");
    status = scanf("%d %d", &n, &num_lines);

    if (status == EOF)
        return false;

    *n_p = n;
    *ch_p = ch;
    *status_p = status;
    *num_lines_p = num_lines;

    return true;
}

void print_character_lines(char ch, int n, int num_lines)
{
    int i;
    for (i = 0; i < n; i++)
    {
        print_character_line(ch, n);
        printf("\n");
    }
}

void print_character_line(char ch, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%c", ch);
}
