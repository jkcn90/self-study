#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int i;
    int count = 0;
    char ch[8];
    bool first = true;

    for (i = 0; i < 8; i++)
        ch[i] = '#';

    while ((ch[count % 8] = getchar()) != '#')
    {
        if ((count % 8 == 0) && !first)
        {
            printf("(Character, ASCII Code) ");
            for (i = 0; i < 8; i++)
            {
                if ((ch[i] != '#') && (ch[i] != '\n'))
                    printf("(%c, %d) ", ch[i], (int) ch[i]);
                else if (ch[i] != '#')
                    printf("(\'\\n\', %d) ", (int) ch[i]);
            }
            printf("\n");
        }
        count++;
        first = false;
    }

    return 0;
}
