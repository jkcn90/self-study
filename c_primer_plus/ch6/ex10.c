#include <stdio.h>
int sum_of_all_integer_squares(int lower_limit, int upper_limit);
int main(void)
{
    int x, y;
    int status;
    printf("Enter lower and upper integer limits: ");
    while (status = scanf("%d %d", &x, &y) == 2, status * (x < y))
    {
        printf("The sum of the squares from %d to %d is %d\n",
           x, y, sum_of_all_integer_squares(x, y));
        printf("Enter next set of limits: ");
    }
    printf("Done\n");
    return 0;
}

int sum_of_all_integer_squares(int lower_limit, int upper_limit)
{
    int i;
    int sum = 0;
    for (i = lower_limit; i <= upper_limit; i++)
    {
        sum += i * i;
    }
    return sum;
}
