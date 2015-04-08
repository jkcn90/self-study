#include <stdio.h>

double harmonic_mean(double x, double y);

int main(void)
{
    char ch;
    int status;
    double i, j;

    while(printf("Enter two non-zero integers (q to quit): "),
          status = scanf("%lf %lf", &i, &j),
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

        if ((i == 0) || (j == 0))
        {
            printf("Numbers cannot be zero.\n");
            continue;
        }

        printf("The harmonic mean of %g and %g is %g\n",
                i, j, harmonic_mean(i, j));
    }
    printf("Bye!\n");

    return 0;
}

double harmonic_mean(double x, double y)
{
    return 2 / (1/x + 1/y);
}
