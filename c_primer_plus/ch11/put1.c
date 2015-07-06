/* put1.c -- prints a string without addint \n */
#include <stdio.h>
void put1(const char * string)
{
    while (*string != '\0')
        putchar(*string++);
}
