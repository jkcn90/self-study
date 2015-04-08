#include <stdio.h>

void larger_of(double * x_p, double * y_p);

int main(void)
{
    char ch;
    int status;
    double x, y;

    while (printf("Enter two integers (q to quit): "),
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

        printf("Received: x=%g y=%g\n", x, y);
        larger_of(&x, &y);
        printf("Result:   x=%g y=%g\n", x, y);
    }
    printf("Bye!\n");

    return 0;
}

void larger_of(double * x_p, double * y_p)
{
    if (*x_p > *y_p)
    {
        *y_p = *x_p;
    } else
    {
        *x_p = *y_p;
    }
}
