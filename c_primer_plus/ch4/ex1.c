#include <stdio.h>

int main(void)
{
    char first_name[30];
    char last_name[30];
    printf("Enter your first and last name:\n");
    scanf("%s %s", first_name, last_name);

    printf("%s %s\n", last_name, first_name);

    return 0;
}
