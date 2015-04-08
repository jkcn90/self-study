#include <stdio.h>

void to_base_n(unsigned long n, int base);

int main(void)
{
    int base;
    int status;
    unsigned long number;

    printf("Enter the base to use\n");
    printf("Choose a value between 2 and 10 inclusive (q to quit):\n");
    while (scanf("%d", &base) == 1)
    {
        if ((base < 2) || (base > 10))
        {
            printf("Please choose a value between 2 and 10 inclusive.\n");
            continue;
        }

        printf("Enter an integer (q to quit):\n");
        status = scanf("%lu", &number);

        if (status != 1)
            break;

        printf("Base %d equivalent: ", base);
        to_base_n(number, base);
        putchar('\n');

        printf("Enter the base to use\n");
        printf("Choose a value between 2 and 10 inclusive (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(unsigned long n, int base)
{
    int r;
    char ch;
    r = n % base;
    if (n >= base)
        to_base_n(n / base, base);
    switch (r)
    {
        case 0 : ch = '0';
                 break;
        case 1 : ch = '1';
                 break;
        case 2 : ch = '2';
                 break;
        case 3 : ch = '3';
                 break;
        case 4 : ch = '4';
                 break;
        case 5 : ch = '5';
                 break;
        case 6 : ch = '6';
                 break;
        case 7 : ch = '7';
                 break;
        case 8 : ch = '8';
                 break;
        case 9 : ch = '9';
                 break;
        default :
                 printf("Error: Invalid remainder\n");
                 return;
    }
    putchar(ch);
}
