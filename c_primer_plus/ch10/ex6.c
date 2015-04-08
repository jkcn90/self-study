#include <stdio.h>
#define SIZE 10

void reverse_array(double array[], int n);
void print_array(const double array[], int n);

int main(void)
{
    double array1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double array2[SIZE+1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    printf("array1 before reverse:\n");
    print_array(array1, SIZE);
    reverse_array(array1, SIZE);
    printf("array1 after reverse:\n");
    print_array(array1, SIZE);

    printf("array2 before reverse:\n");
    print_array(array2, SIZE+1);
    reverse_array(array2, SIZE+1);
    printf("array2 after reverse:\n");
    print_array(array2, SIZE+1);

    return 0;
}

void reverse_array(double array[], int n)
{
    int i;
    double temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
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
