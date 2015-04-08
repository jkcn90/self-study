#include <stdio.h>
#define LITERS_PER_GALLON 3.785
#define KILOMETERS_PER_MILE 1.609

int main(void)
{
    float miles_traveled;
    float gallons_of_gasoline_used;

    float miles_per_gallon;
    float km_per_liter;
    float liters_per_100_km;

    printf("Enter the number of miles traveled:\n");
    scanf("%f", &miles_traveled);

    printf("Enter the number of gallons of gasoline consumed: \n");
    scanf("%f", &gallons_of_gasoline_used);

    miles_per_gallon = miles_traveled / gallons_of_gasoline_used;
    km_per_liter = (miles_per_gallon * KILOMETERS_PER_MILE) / LITERS_PER_GALLON;
    liters_per_100_km = 100 / km_per_liter;

    printf("Fuel economy was %f miles per gallon\n", miles_per_gallon);
    printf("Fuel economy was %f liters per 100 km\n", liters_per_100_km);

    return 0;
}
