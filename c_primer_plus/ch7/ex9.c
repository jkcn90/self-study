# include <stdio.h>
# include <stdbool.h>
#include <math.h>

bool is_prime(int number);
void print_primes_smaller_than(int number);
int main(void)
{
    int out;
    int number;

    printf("Enter a positive integer: ");
    out = scanf("%d", &number);
    if (out > 0)
        print_primes_smaller_than(number);

    return 0;
}

void print_primes_smaller_than(int number)
{
    while (number > 2)
    {
        if (is_prime(number))
            printf("%d\n", number);
        number--;
    }
}

bool is_prime(int number)
{
    int i;
    for (i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
            
    }

    return true;
}
