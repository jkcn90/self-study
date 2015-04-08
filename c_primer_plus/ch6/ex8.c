#include <stdio.h>
int main(void)
{
    int scanf_output;
    float x, y;

    while (printf("Enter two number: "), scanf("%f %f", &x, &y) == 2)
    {
        printf("%f\n", (x-y) / (x*y));
    }

    return 0;
}
