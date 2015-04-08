#include <stdio.h>
#include <float.h>

int main(void)
{
    float float_variable = 1.0/3.0;
    double double_variable = 1.0/3.0;
    printf("Max Digits for Float: %d\n", FLT_DIG);
    printf("Max Digits for Double: %d\n", DBL_DIG);

    printf("1.0/3.0 stored as a float variable: %.12f\n", float_variable);
    printf("1.0/3.0 stored as a double variable: %.12f\n", double_variable);

    printf("1.0/3.0 stored as a float variable: %.12f\n", float_variable);
    printf("1.0/3.0 stored as a double variable: %.12f\n", double_variable);
    return 0;
}
