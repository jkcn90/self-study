/* skiptwo.c -- skip over first two integers of input */
#include <stdio.h>
int main(void)
{
    int n;

    printf("Please enter three integers;\n");
    scanf("%*d %*d %d", &n);
    printf("The last integers was %d\n", n);

    return 0;
}
