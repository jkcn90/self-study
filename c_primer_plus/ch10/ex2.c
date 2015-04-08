#include <stdio.h>
#define SIZE 5

void print_array(const double array[], int n);
void copy_arr(double target[], double source[], int n);
void copy_ptr(double * target, double * source, int n);
void copy_ptrs(double * target, double * source, double * source_end);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];

    printf("--Source--\n");
    print_array(source, SIZE);

    copy_arr(target1, source, SIZE);
    printf("--Target 1--\n");
    print_array(target1, SIZE);

    copy_ptr(target2, source, SIZE);
    printf("--Target 2--\n");
    print_array(target2, SIZE);

    copy_ptrs(target3, source, source + SIZE);
    printf("--Target 3--\n");
    print_array(target3, SIZE);
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

void copy_arr(double target[], double source[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double * target, double * source, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double * target, double * source, double * source_end)
{
    int i = 0;
    while (source < source_end)
    {
        *(target + i++) = *(source++);
    }
}
