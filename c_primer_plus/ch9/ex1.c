#include <stdio.h>
#include <stdbool.h>

double min(double x, double y);

int main(void)
{
    char ch;
    int status;
    double x, y;

    while (printf("Enter two double precision values (q to exit): "),
           status = scanf("%lf %lf", &x, &y),
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

        printf("The min of %g and %g is %g.\n", x, y, min(x, y));
    }
    printf("Bye!\n");

    return 0;
}

double min(double x, double y)
{
    if (x < y)
        return x;
    else
        return y;
}
