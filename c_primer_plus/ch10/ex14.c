#include <stdio.h>
#define ROWS 3
#define COLS 5

void prompt(int rows, int cols, double data[][cols]);
double get_array_max(double array[], int n);
double get_array_average(double array[], int n);

int main(void)
{
    int i;

    double data[ROWS][COLS];

    double data_averages[ROWS];
    double total_average;

    double data_maxs[ROWS];
    double total_max;

    prompt(ROWS, COLS, data);

    for (i = 0; i < ROWS; i++)
    {
        data_averages[i] = get_array_average(data[i], COLS);
    }
    total_average = get_array_average(data_averages, ROWS);

    for (i = 0; i < ROWS; i++)
    {
        data_maxs[i] = get_array_max(data[i], COLS);
    }
    total_max = get_array_max(data_maxs, ROWS);

    for (i = 0; i < ROWS; i++)
    {
        printf("The average for row %d is %lf\n", i, data_averages[i]);
    }

    printf("The average for all numbers is %lf\n", total_average);
    printf("The max for all numbers is %lf\n", total_max);
    return 0;
}

void prompt(int rows, int cols, double data[][cols])
{
    int i;
    int j;

    for (i = 0; i < rows; i++)
    {
        printf("Please enter 5 numbers: ");
        for (j = 0; j < cols; j++)
            scanf("%lf", &data[i][j]);
    }
}

double get_array_average(double array[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum / n;
}

double get_array_max(double array[], int n)
{
    int i;
    double max = array[0];

    for (i = 0; i < n; i++)
    {
        max = max > array[i] ? max : array[i];
    }

    return max;
}
