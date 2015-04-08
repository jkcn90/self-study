#include <stdio.h>
#define OVERTIME_MINIMUM 40
#define OVERTIME_RATE 1.5
#define TAX_RATE_TIER1 0.15
#define TAX_RATE_CAP1 300
#define TAX_RATE_TIER2 0.20
#define TAX_RATE_CAP2 450
#define TAX_RATE_TIER3 0.25

float get_hourly_pay_rate_from_menu();
void print_weekly_salary_data(float basic_pay_rate);
int main(void)
{
    float basic_pay_rate;
    while (basic_pay_rate = get_hourly_pay_rate_from_menu(), basic_pay_rate > 0)
    {
        print_weekly_salary_data(basic_pay_rate);
        printf("\n");
    }
    return 0;
}

float get_hourly_pay_rate_from_menu()
{
    int out;
    int option;
    float basic_pay_rate;
    float option_1 = 8.75;
    float option_2 = 9.33;
    float option_3 = 10.00;
    float option_4 = 11.20;

    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("*****************************************************************\n");
    printf("1) $%5.2f                         2) $%5.2f\n", option_1, option_2);
    printf("3) $%5.2f                         4) $%5.2f\n", option_3, option_4);
    printf("5) quit\n");
    printf("*****************************************************************\n");
    out = scanf("%d", &option);
    if (out == 0)
        basic_pay_rate = 0;
    else if (option == 1)
        basic_pay_rate = option_1;
    else if (option == 2)
        basic_pay_rate = option_2;
    else if (option == 3)
        basic_pay_rate = option_3;
    else if (option == 4)
        basic_pay_rate = option_4;
    else
        basic_pay_rate = -1;

    return basic_pay_rate;
}

void print_weekly_salary_data(float basic_pay_rate)
{
    int hours_worked_per_week;
    float gross_pay, tax_paid, net_pay;
    printf("Enter number of hours worked in a week: ");
    scanf("%d", &hours_worked_per_week);

    if (hours_worked_per_week <= OVERTIME_MINIMUM)
        gross_pay = basic_pay_rate * hours_worked_per_week;
    else
    {
        gross_pay = basic_pay_rate * 40;
        gross_pay += basic_pay_rate * OVERTIME_RATE * (hours_worked_per_week - 40);
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
}
