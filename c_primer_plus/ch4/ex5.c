#include <stdio.h>

int main(void)
{
    float seconds;
    float megabytes;
    float megabits_per_second;
    printf("Enter the download speed in megabits per second (Mbs):\n");
    scanf("%f", &megabits_per_second);
    printf("Enter the size of the file in megabytes (MB):\n");
    scanf("%f", &megabytes);

    seconds = megabytes / megabits_per_second;
    printf("At %.2f megabits per second, a file of %.2f megabytes "
           "downloads in %.2f seconds", megabits_per_second, megabytes, seconds);
    return 0;
}
