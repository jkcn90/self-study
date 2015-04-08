#include <stdio.h>

int main(void)
{
    int i;
    int values[8];
    for(i = 0; i < 8; i++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &values[i]);
    }

    for(i = 7; i >= 0; i--)
    {
        printf("%d ", values[i]);
    }
    printf("\nDone!\n");
    return 0;
}
