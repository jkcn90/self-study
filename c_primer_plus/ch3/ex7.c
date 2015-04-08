#include <stdio.h>
int main(void)
{
    int inches;
    float centimeters_per_inch = 2.54;

    printf("Enter your height in inches: ");
    scanf("%d", &inches);
    printf("Your height in cm is: %f\n", inches*centimeters_per_inch);

    return 0;
}
