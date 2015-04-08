#include <stdio.h>
int main(void)
{
    float cups;
    int cups_per_pint = 2;
    int ounces_per_cup = 8;
    int tablespoons_per_ounce = 2;
    int teaspoons_per_tablespoon = 3;

    printf("Enter a volumne in cups: ");
    scanf("%f", &cups);


    printf("%f cups is equivalent to:\n", cups);
    printf("\t%f pints\n", cups/cups_per_pint);
    printf("\tor %f ounces\n", cups*ounces_per_cup);
    printf("\tor %f tablespoons\n", cups*ounces_per_cup*tablespoons_per_ounce);
    printf("\tor %f teaspoons\n", cups*ounces_per_cup*tablespoons_per_ounce*teaspoons_per_tablespoon);

    return 0;
}
