#include <stdio.h>

float get_tax_owed();
int main(void)
{
    float tax;
    while((tax = get_tax_owed()) > 0)
        printf("You owe $%.2f in tax.\n", tax);

    return 0;
}

float get_tax_owed()
{
    const int SINGLE_BASE_CAP = 17850;
    const float SINGLE_BASE_TAX = 0.15;
    const float SINGLE_EXCESS_TAX = 0.28;

    const int HEAD_OF_HOUSEHOLD_BASE_CAP = 23900;
    const float HEAD_OF_HOUSEHOLD_BASE_TAX = 0.15;
    const float HEAD_OF_HOUSEHOLD_EXCESS_TAX = 0.28;

    const int MARRIED_JOINT_BASE_CAP = 29750;
    const float MARRIED_JOINT_BASE_TAX = 0.15;
    const float MARRIED_JOINT_EXCESS_TAX = 0.28;

    const int MARRIED_SEPARATE_BASE_CAP = 14875;
    const float MARRIED_SEPARATE_BASE_TAX = 0.15;
    const float MARRIED_SEPARATE_EXCESS_TAX = 0.28;

    int out;
    int option;
    float taxable_income;
    float tax_owed;

    printf("Enter the number corresponding to your tax category:\n");
    printf("**************************\n");
    printf("1) Single\n");
    printf("2) Head of Household\n");
    printf("3) Married, Joint\n");
    printf("4) Married, Separate\n");
    printf("5) Quit Program\n");
    printf("**************************\n");
    out = scanf("%d", &option);

    if ((out == 0) || option == 5)
        return -1;

    printf("Enter Your taxable income: ");
    out = scanf("%f", &taxable_income);
    if ((out == 0) || taxable_income < 0)
        return -1;

    switch (option)
    {
        case 1 :
            if (taxable_income < SINGLE_BASE_CAP)
                tax_owed = SINGLE_BASE_TAX * taxable_income;
            else
            {
                tax_owed = SINGLE_BASE_TAX * SINGLE_BASE_CAP;
                tax_owed += SINGLE_EXCESS_TAX * taxable_income;
            }
            break;
        case 2 :
            if (taxable_income < HEAD_OF_HOUSEHOLD_BASE_CAP)
                tax_owed = HEAD_OF_HOUSEHOLD_BASE_TAX * taxable_income;
            else
            {
                tax_owed = HEAD_OF_HOUSEHOLD_BASE_TAX * HEAD_OF_HOUSEHOLD_BASE_CAP;
                tax_owed += HEAD_OF_HOUSEHOLD_EXCESS_TAX * taxable_income;
            }
            break;
        case 3 :
            if (taxable_income < MARRIED_JOINT_BASE_CAP)
                tax_owed = MARRIED_JOINT_BASE_TAX * taxable_income;
            else
            {
                tax_owed = MARRIED_JOINT_BASE_TAX * MARRIED_JOINT_BASE_CAP;
                tax_owed += MARRIED_JOINT_EXCESS_TAX * taxable_income;
            }
            break;
        case 4 :
            if (taxable_income < MARRIED_SEPARATE_BASE_CAP)
                tax_owed = MARRIED_JOINT_BASE_TAX * taxable_income;
            else
            {
                tax_owed = MARRIED_JOINT_BASE_TAX * MARRIED_SEPARATE_BASE_CAP;
                tax_owed += MARRIED_JOINT_EXCESS_TAX * taxable_income;
            }
            break;
    }

    return tax_owed;
}
