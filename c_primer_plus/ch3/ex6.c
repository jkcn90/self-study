#include <stdio.h>
int main(void)
{
    int quarts;
    int grams_per_quart = 950;
    float molecules;
    float molecules_per_gram_of_water = 1 / 3e-23;

    printf("Enter amount of water in quarts: ");
    scanf("%d", &quarts);
    molecules = quarts * grams_per_quart * molecules_per_gram_of_water;
    printf("There are approximately %e molecules ", molecules);
    printf(" in %d quarts of water\n", quarts);

    return 0;
}
