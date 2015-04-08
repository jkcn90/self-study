#include <stdio.h>

int main(void)
{
    const int MINUTES_PER_HOUR = 60;

    int hours;
    int minutes;
    int time_in_minutes;

    printf("Enter number of minutes");
    printf("(Enter a negative value to exit):\n");
    scanf("%d", &time_in_minutes);
        
    while (time_in_minutes >= 0)
    {
        hours = time_in_minutes / MINUTES_PER_HOUR;
        minutes = time_in_minutes % MINUTES_PER_HOUR;
        printf("%d minutes is %d hours and %d minutes!\n",
               time_in_minutes, hours, minutes);

        printf("Enter number of minutes");
        printf("(Enter a negative value to exit):\n");
        scanf("%d", &time_in_minutes);
    }
}
