#include <stdio.h>

int main(void)
{
    int count, sum, n;
    printf("Sum the first n integers: \n");
    scanf("%d", &n);

    count = 0;
    sum = 1;
    while (count++ < n)
    {
        sum += count * count;
    }
    printf("sum = %d\n", sum);

    return 0;
}
