#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 0;
    char line[255];
    char character;

    printf("Enter a line of text:\n");
    while((scanf("%c", &character), character != '\n'))
    {
        line[i] = character;
        i++;
    }
    
    for (i = strlen(line); i >= 0; i--)
    {
        printf("%c", line[i]);
    }
    printf("\n");
    return 0;
}
