#include <stdio.h>

int main(void)
{
    float num;
    printf("Enter a floating-point number:\n");
    scanf("%f", &num);
    printf("The input is %+f or %e.\n", num, num);
    return 0;
}
