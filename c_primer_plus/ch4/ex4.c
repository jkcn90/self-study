#include <stdio.h>

int main(void)
{
    float height_in_inches;
    float height_in_feet;
    char first_name[30];
    char last_name[30];
    printf("Enter your first and last name:\n");
    scanf("%s %s", first_name, last_name);
    printf("Enter your height in inches:\n");
    scanf("%f", &height_in_inches);

    height_in_feet = height_in_inches / 12;
    printf("%s %s, you are %f feet tall", first_name, last_name, height_in_feet);

    return 0;
}
