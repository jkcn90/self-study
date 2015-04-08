#include <stdio.h>

double cubed(double n);
int main(void)
{
    double value;
    printf("Enter a double: \n");
    scanf("%lf", &value);
    printf("The value cubed is: %lf\n", cubed(value));
    return 0;
}

double cubed(double n)
{
    return n * n * n;
}
