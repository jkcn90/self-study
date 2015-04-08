#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 0;
    int count = 0;
    char input[255];

    while ((input[i] = getchar()) != '#')
    {
        switch (input[i])
        {
            case '.' :
            input[i] = '!';
            count++;
            break;
            case '!' :
                i++;
                input[i] = '!';
                count++;
                break;
        }
       
        i++;
    }

    for (i = 0; i < strlen(input); i++)
        printf("%c", input[i]);
    printf("\n");
    printf("Modified: %d\n", count);
    
    return 0;
}
