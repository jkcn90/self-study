#include <stdio.h>

int analyze(char ch);

int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
        analyze(ch);

    return 0;
}

int analyze(char ch)
{
    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) )
    {
        printf("%c is a letter\n", ch);
        return (int) ch;
    }
    else
        return -1;
}
