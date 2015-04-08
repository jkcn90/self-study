#include <stdio.h>

int main(void)
{
    const float INITIAL_INVESTMENT = 100;

    int years = 0;
    float simple_investment = INITIAL_INVESTMENT;
    float compounded_investment = INITIAL_INVESTMENT;
    float simple_interest_rate = 0.1;
    float annually_compounded_interest_rate = 0.05;

    while(compounded_investment <= simple_investment)
    {
        simple_investment += simple_interest_rate * INITIAL_INVESTMENT;
        compounded_investment *= (1+ annually_compounded_interest_rate);
        printf("%d %f %f\n", years++, simple_investment, compounded_investment);
    }
    return 0;
}
