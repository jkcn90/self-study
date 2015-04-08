#include <stdio.h>
int main(void)
{
    int ascii_code;

    printf("Enter a ASCII code value: ");
    scanf("%d", &ascii_code);
    printf("ASCII code: %d ASCII character: %c\n", ascii_code, ascii_code);

    return 0;
}
