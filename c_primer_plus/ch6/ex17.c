#include <stdio.h>

int main(void)
{
    float investment = 1e6;
    float interest_rate = 0.08;

    int years = 1;
    int annual_withdraw = 1e5;

    while (investment > 0)
    {
        investment *= (1 + interest_rate);
        investment -= annual_withdraw;
        printf("%d %f\n", years++, investment);
    }

    return 0;
}
