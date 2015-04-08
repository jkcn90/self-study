#include <stdio.h>
#define ROWS 3
#define COLS 5

void print_2d_array(int rows, int cols, const double array[][cols]);
void multiply_array(int rows, int cols, double array[][cols], double multiplier);

int main(void)
{
    double array[ROWS][COLS] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    printf("--Before Doubling--\n");
    print_2d_array(ROWS, COLS, array);

    multiply_array(ROWS, COLS, array, 2);

    printf("--After Doubling--\n");
    print_2d_array(ROWS, COLS, array);
    return 0;
}

void print_2d_array(int rows, int cols, const double array[][cols])
{
    int i;
    int j;
    printf("Array Values: \n");

    printf("{\n");
    for (i = 0; i < rows; i++)
    {
        printf("\t{");
        for (j = 0; j < cols; j++)
        {
            printf("%lf, ", array[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");
}

void multiply_array(int rows, int cols, double array[][cols], double multiplier)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            array[i][j] *= multiplier;
        }
    }
}
