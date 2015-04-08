#include <stdio.h>
int main(void)
{
    int i;
    int smallest_number, largest_number;
    printf("Enter smallest number in table: ");
    scanf("%d", &smallest_number);
    printf("Enter largest number in table: ");
    scanf("%d", &largest_number);

    for (i = smallest_number; i <= largest_number; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}
