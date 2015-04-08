#include <stdio.h>

int main(void)
{
    int i;
    double array[8];
    double cumulative_array[8];

    for (i = 0; i < 8; i++)
    {
        printf("Enter a value: ");
        scanf("%lf", &array[i]);
        cumulative_array[i] = cumulative_array[i-1] + array[i];
    }

    printf("Array: ");
    for (i = 0; i < 8; i++)
    {
        printf("%f ", array[i]);
    }

    printf("\nCumulative array: ");
    for (i = 0; i < 8; i++)
    {
        printf("%f ", cumulative_array[i]);
    }
    printf("\n");

    return 0;
}
