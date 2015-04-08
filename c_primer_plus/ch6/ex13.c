#include <stdio.h>

int main(void)
{
    int i;
    int array[8];
    int current_power_of_2 = 1;

    for (i = 0; i < 8; i++)
    {
        current_power_of_2 *= 2;
        array[i] = current_power_of_2;
    }

    i = 0;
    do {
        printf("Index %d fetched: %d\n", i, array[i]);
        i++;
    } while(i < 8);

    return 0;
}
