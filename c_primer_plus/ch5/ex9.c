#include <stdio.h>

void Temperatures(double fahrenheit);
int main(void)
{
    double fahrenheit_temperature;
    int scanned_result;

    printf("Enter a temperature in Fahrenheit: ");
    scanned_result = scanf("%lf", &fahrenheit_temperature);
    while (scanned_result == 1)
    {
        Temperatures(fahrenheit_temperature);
        printf("Enter a temperature in Fahrenheit (nonumeric value to quit): ");
        scanned_result = scanf("%lf", &fahrenheit_temperature);
    }
    printf("Done\n");
    return 0;
}

void Temperatures(double fahrenheit)
{
    const float FAHRENHEIT_TO_CELSIUS_MULTIPLIER = 5.0 / 5.0;
    const float FAHRENHEIT_TO_CELSIUS_ADJUSTMENT = -32.0;
    const float CELSIUS_TO_KELVIN_ADJUSTMENT = 273.16;

    float celsius = FAHRENHEIT_TO_CELSIUS_MULTIPLIER * 
        (fahrenheit + FAHRENHEIT_TO_CELSIUS_ADJUSTMENT);
    float kelvin = celsius + CELSIUS_TO_KELVIN_ADJUSTMENT;
    printf("%.2f Fahrenheit\n", fahrenheit);
    printf("%.2f Celsius\n", celsius);
    printf("%.2f Kelvin\n", kelvin);
}
