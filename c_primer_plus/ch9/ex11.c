#include <stdio.h>

unsigned long Fibonacci(unsigned n);

int main(void)
{
    int n;
    while (printf("Enter a number: "),
            (scanf("%d", &n)) == 1)
    {
        printf("Fibonacci number %d is: %ld\n", n, Fibonacci(n));
    }
}

unsigned long Fibonacci(unsigned n)
{
    int i;
    unsigned long x = 0;
    unsigned long y = 1;
    unsigned long temp;

    for (i = 0; i < n; i++)
    {
        temp = y;
        y = x + y;
        x = temp;
    }

    return x;
}
