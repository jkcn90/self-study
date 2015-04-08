#include <stdio.h>
int main(void)
{
    const float CENTIMETERS_PER_INCH = 2.54;
    const int INCHES_PER_FEET = 12;

    float height_in_centimeters;
    float inches;
    int feet;
    printf("Enter a height in centimeters ");
    printf("(Enter a nonpositive value to exit): ");
    scanf("%f", &height_in_centimeters);

    while (height_in_centimeters > 0)
    {
        inches = height_in_centimeters / CENTIMETERS_PER_INCH;
        feet = inches / INCHES_PER_FEET;
        inches -= feet * INCHES_PER_FEET;

        printf("%.1f cm = %d ft, %.1f inches\n", height_in_centimeters, feet, inches);
        printf("Enter a height in centimeters ");
        printf("(Enter a nonpositive value to exit): ");
    scanf("%f", &height_in_centimeters);
    }

    printf("Done!\n");
    return 0;
}
