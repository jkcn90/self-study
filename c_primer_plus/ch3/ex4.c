#include <stdio.h>
int main(void)
{
    float float_value;

    printf("Enter a floating-point value: ");
    scanf("%f", &float_value);
    printf("fixed-point notation: %f\n", float_value);
    printf("exponential notation: %e\n", float_value);
    printf("p notation: %a\n", float_value);

    return 0;
}
