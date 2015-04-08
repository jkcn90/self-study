#include <stdio.h>
#include <stdbool.h>

double power(double n, int p);

int main(void)
{
    char ch;
    int exp;
    int status;
    double x, xpow;

    while (printf("Enter a number and the power to which the number will be raised "),
           printf("(q to quit): "),
           status = scanf("%lf%d", &x, &exp),
           (ch = getchar()) != 'q')
    {
        if (ch != '\n')
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

        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
    }
    printf("Bye!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    if ((n == 0) && (p == 0))
    {
        printf("0^0 is undefined. Returning value 1.\n");
        return 1;
    } else if (n == 0)
    {
        return 0;
    } else if (p == 0)
    {
        return 1;
    } else if (p > 0)
    {
        for (i = 1; i <= p; i++)
            pow *= n;
    } else if (p < 0)
    {
        for (i = p; i <= 0; i++)
            pow /= n;
    } else
    {
        printf("Error using n=%g and p = %d", n, p);
    }

    return pow;
}
