#include <stdio.h>

int main(void)
{
    const int DUNBARS_NUMBER = 150;

    int friend_count = 5;
    int weeks = 0;
    while(friend_count < DUNBARS_NUMBER)
    {
        printf("%d %d\n", weeks++, friend_count);
        friend_count -= weeks;
        friend_count *= 2;
    }
    printf("%d %d\n", weeks++, friend_count);

    return 0;
}
