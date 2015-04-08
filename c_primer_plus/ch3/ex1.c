#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int max_int = 2147483647;
    int min_int = -2147483648;
    float max_float = 340282346638528859811704183484516925440.000000;
    float min_float = -340282346638528859811704183484516925440.000000;

    printf("The number of bits in a byte %d\n", CHAR_BIT);

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);

    printf("The minimum value of FLOAT = %f\n", FLT_MIN);
    printf("The maximum value of FLOAT = %f\n", FLT_MAX);

    printf("Max Signed Integer: %d Overflow Behavior: %d\n", max_int, max_int+1);
    printf("Min Signed Integer: %d Underflow Behavior: %d\n", min_int, min_int-1);

    printf("Max Signed Float: %f Overflow Behavior: %f\n", max_float, max_float+1);
    printf("Min Signed Float: %f Overflow Behavior: %f\n", min_float, min_float-1);

    return 0;
}
