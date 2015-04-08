#include <stdio.h>
#define SIZE 10

int max_min_difference(int array[], int n);

int main(void)
{
    int array1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[SIZE] = {1, 8, 3, 2, 1, 6, 29, 8, 9, 10};

    printf("In array1 the difference between the largest and smallest value is: %d\n",
            max_min_difference(array1, SIZE));
    printf("We expect it to be 9\n");

    printf("In array2 the difference between the largest and smallest value is: %d\n",
            max_min_difference(array2, SIZE));
    printf("We expect it to be 28\n");

    return 0;
}

int max_min_difference(int array[], int n)
{
    int i;
    int max_value;
    int min_value;
    
    if (n > 0)
    {
        min_value = array[0];
        max_value = array[0];
    }
    else
    {
        printf("Invalid array length %d (must be positive)\n", n);
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        max_value = max_value > array[i] ? max_value : array[i];
        min_value = min_value < array[i] ? min_value : array[i];
    }
    return max_value - min_value;
}
