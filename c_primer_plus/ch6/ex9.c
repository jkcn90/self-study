#include <stdio.h>
float calculate(float x, float y);
int main(void)
{
    int scanf_output;
    float x, y;

    while (printf("Enter two number: "), scanf("%f %f", &x, &y) == 2)
    {
        printf("%f\n", calculate(x, y));
    }

    return 0;
}

float calculate(float x, float y)
{
    return (x-y) / (x*y);
}
