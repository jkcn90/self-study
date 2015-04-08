#include <stdio.h>
#define SIZE 10

int index_of_max(int array[], int n);

int main(void)
{
    int array1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[SIZE] = {1, 8, 3, 2, 1, 6, 29, 8, 9, 10};

    printf("In array1 the largest element is at index: %d\n", index_of_max(array1, SIZE));
    printf("We expect it to be 9\n");

    printf("In array2 the largest element is: %d\n", index_of_max(array2, SIZE));
    printf("We expect it to be 6\n");

    return 0;
}

int index_of_max(int array[], int n)
{
    int i;
    int index;
    int max_value;
    
    if (n > 0)
    {
        index = 0;
        max_value = array[index];
    }
    else
    {
        printf("Invalid array length %d (must be positive)\n", n);
        return -1;
    }
    for (i = 0; i < n; i++)
    {
        index = max_value > array[i] ? index : i;
        max_value = max_value > array[i] ? max_value : array[i];
    }
    return index;
}
