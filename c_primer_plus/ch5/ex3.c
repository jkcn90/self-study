#include <stdio.h>

int main(void)
{
    const int DAYS_IN_A_WEEK = 7;

    int days;
    int weeks;
    int number_of_days;

    printf("Enter the number of days ");
    printf("(Enter a nonpositive value to quit):\n");
    scanf("%d", &number_of_days);

    while (number_of_days >= 0)
    {
        weeks = number_of_days / DAYS_IN_A_WEEK;
        days = number_of_days % DAYS_IN_A_WEEK;
        printf("%d days are %d weeks, %d days.\n", number_of_days, weeks, days);

        printf("Enter the number of days ");
        printf("(Enter a nonpositive value to quit):\n");
        scanf("%d", &number_of_days);
    }

    printf("Done!\n");

    return 0;
}
