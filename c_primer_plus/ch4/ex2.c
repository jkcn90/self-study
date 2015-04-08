#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[30];
    char last_name[30];
    printf("Enter your first and last name:\n");
    scanf("%s %s", first_name, last_name);

    printf("\"%s %s\"\n", first_name, last_name);
    printf("\"%20s %s\"\n", first_name, last_name);
    printf("\"%-20s %s\"\n", first_name, last_name);
    printf("\"%*s %-*s\"\n", ((int) strlen(first_name))+2, first_name,
                            ((int) strlen(last_name))+1, last_name);

    return 0;
}
