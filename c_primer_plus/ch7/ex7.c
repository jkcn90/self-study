#include <stdio.h>
#define BASIC_PAY_RATE 10.00
#define OVERTIME_MINIMUM 40
#define OVERTIME_RATE 1.5
#define TAX_RATE_TIER1 0.15
#define TAX_RATE_CAP1 300
#define TAX_RATE_TIER2 0.20
#define TAX_RATE_CAP2 450
#define TAX_RATE_TIER3 0.25
int main(void)
{
    int hours_worked_per_week;
    float gross_pay, tax_paid, net_pay;
    printf("Enter number of hours worked in a week: ");
    scanf("%d", &hours_worked_per_week);

    if (hours_worked_per_week <= OVERTIME_MINIMUM)
        gross_pay = BASIC_PAY_RATE * hours_worked_per_week;
    else
    {
        gross_pay = BASIC_PAY_RATE * 40;
        gross_pay += BASIC_PAY_RATE * OVERTIME_RATE * (hours_worked_per_week - 40);
    }

    if (gross_pay <= TAX_RATE_CAP1)
        tax_paid = TAX_RATE_TIER1 * gross_pay;
    else if (gross_pay <= TAX_RATE_CAP2)
    {
        tax_paid = TAX_RATE_TIER1 * TAX_RATE_CAP1;
        tax_paid += TAX_RATE_TIER2 * (gross_pay - TAX_RATE_CAP1);
    }
    else
    {
        tax_paid = TAX_RATE_TIER1 * TAX_RATE_CAP1;
        tax_paid += TAX_RATE_TIER2 * (TAX_RATE_CAP1 - TAX_RATE_CAP2);
        tax_paid += TAX_RATE_TIER3 * (gross_pay - TAX_RATE_CAP2);
    }

    net_pay = gross_pay - tax_paid;

    printf("Gross pay: %.2f\n", gross_pay);
    printf("Tax paid: %.2f\n", tax_paid);
    printf("Net pay: %.2f\n", net_pay);
    return 0;
}
