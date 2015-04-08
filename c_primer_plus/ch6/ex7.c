#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char array[30];
    printf("Enter a word: ");
    scanf("%s", array);

    for(i = strlen(array) - 1; i >= 0; i--)
        printf("%c", array[i]);

    printf("\n");
    return 0;
}
