#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_non_word(char);
int main(void)
{
    int ch;
    int num_letters = 0;
    int num_words = 0;
    bool in_word = false;

    while ((ch = getchar()) != EOF)
    {
        if (in_word)
        {
            if (is_non_word(ch))
            {
                in_word = false;
            } else
            {
                num_letters++;
            }
        } else
        {
            if (!is_non_word(ch))
            {
                in_word = true;
                num_letters++;
                num_words++;
            }
        }
    }
    printf("Number of words: %d\n", num_words);
    printf("Number of letters: %d\n", num_letters);
    printf("Average number of letters per word: %f\n",
            num_letters / (float) num_words);

    return 0;
}

bool is_non_word(char ch)
{
    return (ispunct(ch) || (ch == '\n') || (ch == ' ') || (ch == '\t'));
}
