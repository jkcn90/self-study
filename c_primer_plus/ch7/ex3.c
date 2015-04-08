#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int digit;
    int scanf_output;
    int number_of_odd_integers = 0;
    int number_of_even_integers = 0;
    int sum_of_odd_integers = 0;
    int sum_of_even_integers = 0;

    while ((ch = getchar()) != '0')
    {
        digit = ch - '0';
        if (isdigit(digit))
        {
            if (digit % 2)
            {
                number_of_odd_integers++;
                sum_of_odd_integers += digit;
            } else 
            {
                number_of_even_integers++;
                sum_of_even_integers += digit;
            }
        }
    }
    printf("Number of odd digits: %d\n", number_of_odd_integers);
    if (number_of_odd_integers > 0)
        printf("Average of odd digits: %d\n", sum_of_odd_integers / number_of_odd_integers);
    printf("Number of even digits: %d\n", number_of_even_integers);
    if (number_of_even_integers > 0)
        printf("Average of even digits: %d\n", sum_of_even_integers / number_of_even_integers);

    return 0;
}
