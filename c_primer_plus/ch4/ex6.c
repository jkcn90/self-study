#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[30];
    char last_name[30];
    int first_name_length;
    int last_name_length;

    printf("Enter your first and last name\n");
    scanf("%s %s", first_name, last_name);

    first_name_length = strlen(first_name);
    last_name_length = strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("% *d % *d\n", first_name_length, first_name_length,
                          last_name_length, last_name_length);

    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", first_name_length, first_name_length,
                          last_name_length, last_name_length);
    return 0;
}
