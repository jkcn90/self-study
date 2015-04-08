#include <stdio.h>

char get_menu_option(void);
float get_float(void);
void show_menu(void);
int main(void)
{
    char ch;
    float first_number;
    float second_number;

    while (show_menu(), (ch = get_menu_option()) != 'q')
    {
        if ((ch != 'a') && (ch != 's') && (ch != 'm') && (ch != 'd'))
        {
            printf("---------------\n");
            printf("%c\n", ch);
            printf("---------------\n");
            printf("Invalid selection, please try again\n");
            continue;
        }

        printf("Enter first number: ");
        first_number = get_float();
        printf("Enter second number: ");
        second_number = get_float();

        if (ch == 'a')
        {
            printf("%g + %g = %g\n", first_number, second_number,
                    first_number + second_number);
        } else if (ch == 's')
        {
            printf("%g - %g = %g\n", first_number, second_number,
                    first_number - second_number);
        } else if (ch == 'm')
        {
            printf("%g * %g = %g\n", first_number, second_number,
                    first_number * second_number);
        } else if (ch == 'd')
        {
            while (second_number == 0)
            {
                printf("For division the second number cannot be 0\n");
                printf("Enter second number: ");
                second_number = get_float();
            }
            printf("%f + %f = %f\n", first_number, second_number,
                    first_number + second_number);
        }
    }
    
    return 0;
}

void show_menu(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. add          s. subtract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");
}

float get_float(void)
{
    float input;
    char ch;

    while (scanf("%f", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\nPlease enter a ");
        printf("float value, such as 25.0, -178.0, or 3.0: ");
    }

    return input;
}

char get_menu_option(void)
{
    char input;
    char ch;

    while ((scanf("%c", &input) != 1) || (input == '\n'))
    {
        if (input == '\n')
            continue;

        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a valid menu option");
        show_menu();
    }

    while ((ch = getchar()) != '\n')
        continue;

    return input;
}
