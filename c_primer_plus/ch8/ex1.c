#include <stdio.h>

int main(void)
{
    int count = 0;

    while (getchar() != EOF)
        count++;

    printf("Read %d characters\n", count);
    
    return 0;
}
