#include <stdio.h>
#define SIZE 4

void print_array(const double array[], int n);
void sum_arrays(double array1[], double array2[], double array3[], int n);

int main(void)
{
    double array1[SIZE] = {2,4,5,8};
    double array2[SIZE] = {1,0,4,6};
    double output[SIZE];

    printf("--Array 1--\n");
    print_array(array1, SIZE);
    printf("--Array 2--\n");
    print_array(array2, SIZE);

    sum_arrays(array1, array2, output, SIZE);

    printf("--Output Array--\n");
    print_array(output, SIZE);


    return 0;
}

void sum_arrays(double array1[], double array2[], double array3[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
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
