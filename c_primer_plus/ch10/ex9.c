#include <stdio.h>
#define ROWS 3
#define COLS 5

void copy_ptr(double * target, double * source, int n);
void print_2d_array(int rows, int cols, const double array[][cols]);
void copy_2d_arr(int rows, int cols, double target[][cols], double source[][cols]);

int main(void)
{
    double source[ROWS][COLS] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    double target[ROWS][COLS];

    printf("--Source--\n");
    print_2d_array(ROWS, COLS, source);

    copy_2d_arr(ROWS, COLS, target, source);

    printf("--Target--\n");
    print_2d_array(ROWS, COLS, target);

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

void copy_2d_arr(int rows, int cols, double target[][cols], double source[][cols])
{
    int i;
    for (i = 0; i < rows; i++)
    {
        copy_ptr(*(target + i), *(source + i), cols);
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
