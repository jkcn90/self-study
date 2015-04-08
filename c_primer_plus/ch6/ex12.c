#include <stdio.h>

void print_value_of_series(int number_of_terms);
int main(void)
{
    int number_of_terms;

    printf("Enter the number of terms to sum: ");
    while (scanf("%d", &number_of_terms), number_of_terms > 0)
    {
        print_value_of_series(number_of_terms);
        printf("Enter the number of terms to sum: ");
    }

    return 0;
}

void print_value_of_series(int number_of_terms)
{
    int i;
    float sum = 0;

    for (i = 1; i <= number_of_terms; i++)
    {
        sum += 1.0 / i;
    }
    printf("The sum of the first %d terms of the first series is: %f\n", 
           number_of_terms, sum);

    sum = 0;
    for (i = 1; i <= number_of_terms; i++)
    {
        sum += (2*(i % 2) - 1) * (1.0 / i);
    }
    printf("The sum of the first %d terms of the second series is: %f\n", 
           number_of_terms, sum);
}
