#include <stdio.h>

int main(void)
{
    int value;
    int target_value;

    printf("Enter a number:\n");
    scanf("%d", &value);
    printf("You entered %d:\n", value);
    target_value = value + 10;

    while (value <= target_value)
    {
        printf("%d\n", value);
        value++;
    }
}
