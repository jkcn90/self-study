#include <stdio.h>
#define SIZE 7

void print_array(const double array[], int n);
void copy_ptrs(double * target, double * source, double * source_end);

int main(void)
{
    double source[SIZE] = {1,2,3,4,5,6,7};
    double target[SIZE];

    printf("--SOURCE--");
    print_array(source, SIZE);

    copy_ptrs(target + 2, source + 2, source + 7);

    printf("--TARGET--");
    print_array(target, SIZE);

    return 0;
}

void print_array(const double array[], int n)
{
    int i;
    printf("Array Values: ");
    for (i = 0; i < n; i++)
    {
        printf("%lf ", array[i]);
    }

    printf("\n");
}

void copy_ptrs(double * target, double * source, double * source_end)
{
    int i = 0;
    while (source < source_end)
    {
        *(target + i++) = *(source++);
    }
}
