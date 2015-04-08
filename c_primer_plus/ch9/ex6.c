#include <stdio.h>

void swap (double * x_p, double * y_p);
void reorder(double * x_p, double * y_p, double * z_p);

int main(void)
{
    char ch;
    int status;
    double x, y, z;

    while (printf("Enter three integers (q to quit): "),
           status = scanf("%lf %lf %lf", &x, &y, &z),
           (ch = getchar()) != 'q')
    {
        if (ch != '\n')
        {
            if (status == 3)
            {
                printf("Too many inputs.\n");
            } else
            {
                printf("Invalid input.\n");
            }

            while (getchar() != '\n');
            continue;
        }

        printf("Received: x=%g y=%g z=%g\n", x, y, z);
        reorder(&x, &y, &z);
        printf("Result:   x=%g y=%g z=%g\n", x, y, z);
    }
    printf("Bye!\n");

    return 0;
}

void reorder(double * x_p, double * y_p, double * z_p)
{
    double smallest = *x_p;
    double middle = *y_p;
    double largest = *z_p;

    if (smallest > middle)
        swap(&smallest, &middle);
    if (middle > largest)
        swap(&middle, &largest);
    if (smallest > middle)
        swap(&smallest, &middle);

    *x_p = smallest;
    *y_p = middle;
    *z_p = largest;
}

void swap (double * x_p, double * y_p)
{
    double temp = *x_p;
    *x_p = *y_p;
    *y_p = temp;
}
