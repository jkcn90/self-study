#include <stdio.h>
int main(void)
{
    int age;
    float year_to_seconds = 3.156e7;

    printf("Enter your age in years: ");
    scanf("%d", &age);
    printf("Your age in seconds is: %f\n", age*year_to_seconds);

    return 0;
}
