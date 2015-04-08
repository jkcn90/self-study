#include <stdio.h>

void display_purchase_menu();
int main(void)
{
    const float COST_PER_POUND_ARTICHOKES = 2.05;
    const float COST_PER_POUND_BEETS = 1.15;
    const float COST_PER_POUND_CARROTS = 1.09;

    char ch;
    float pounds;
    float pounds_of_artichokes = 0;
    float pounds_of_beets = 0;
    float pounds_of_carrots = 0;
    float artichokes_cost;
    float beets_cost;
    float carrots_cost;

    float pounds_total;
    float cost_total;

    float shipping;
    float discount;
    float grand_total;

    display_purchase_menu();
    while ((ch = getchar()) != 'q')
    {
        switch (ch)
        {
            case 'a' :
                printf("How many pounds of artichokes would you like to purchase: ");
                scanf("%f", &pounds);
                if (pounds < 0)
                    printf("Must enter positive number.\n");
                else
                    pounds_of_artichokes += pounds;
                break;
            case 'b' :
                printf("How many pounds of beets would you like to purchase: ");
                scanf("%f", &pounds);
                if (pounds < 0)
                    printf("Must enter positive number.\n");
                else
                    pounds_of_beets += pounds;
                break;
            case 'c' :
                printf("How many pounds of carrots would you like to purchase: ");
                scanf("%f", &pounds);
                if (pounds < 0)
                    printf("Must enter positive number.\n");
                else
                    pounds_of_carrots += pounds;
                break;
            case '\n' :
                continue;
            default :
                printf("Invalid input: %c", ch);
                while ((ch = getchar()) != '\n')
                    printf("%c", ch);
                printf("\n");
                break;
        }
    display_purchase_menu();
    }

    artichokes_cost = pounds_of_artichokes * COST_PER_POUND_ARTICHOKES;
    beets_cost = pounds_of_beets * COST_PER_POUND_BEETS;
    carrots_cost = pounds_of_carrots * COST_PER_POUND_CARROTS;
    cost_total = artichokes_cost + beets_cost + carrots_cost;
    pounds_total = pounds_of_artichokes + pounds_of_beets + pounds_of_carrots;
    if (pounds_total == 0)
    {
        printf("No items purchased.\n");
        return 0;
    }

    printf("Checkout\n");
    printf("**************************\n");
    printf("Artichokes:\n");
    printf("\tPounds ordered: %.2f\n", pounds_of_artichokes);
    printf("\tCost per pound: %.2f\n", COST_PER_POUND_ARTICHOKES);
    printf("\tCost this order: %.2f\n", artichokes_cost);

    printf("Beets:\n");
    printf("\tPounds ordered: %.2f\n", pounds_of_beets);
    printf("\tCost per pound: %.2f\n", COST_PER_POUND_BEETS);
    printf("\tCost this order: %.2f\n", beets_cost);

    printf("Carrots:\n");
    printf("\tPounds ordered: %.2f\n", pounds_of_carrots);
    printf("\tCost per pound: %.2f\n", COST_PER_POUND_CARROTS);
    printf("\tCost this order: %.2f\n", carrots_cost);

    printf("Total:\n");
    printf("\tPounds ordered: %.2f\n", pounds_total);
    printf("\tCost per pound: %.2f\n", cost_total / pounds_total);
    printf("\tCost this order: %.2f\n", cost_total);

    if (cost_total > 100.0)
    {
        discount = cost_total * 0.05;
        printf("Discount: %.2f\n", discount);
    } else
    {
        discount = 0;
    }

    if (pounds_total < 5.00)
    {
        shipping = 6.50;
    } else if (pounds_total < 20.00)
    {
        shipping = 14.00;
    } else
    {
        shipping = pounds_total * 0.50;
    }

    printf("Shipping: %.2f\n", shipping);
    printf("Grand Total: %.2f\n", cost_total - discount + shipping);
    printf("**************************\n");
    return 0;
}

void display_purchase_menu()
{
    printf("What action would you like to do:\n");
    printf("**************************\n");
    printf("a) Purchase Artichokes\n");
    printf("b) Purchase Beets\n");
    printf("c) Purchase Carrots\n");
    printf("q) Check out items\n");
    printf("**************************\n");
}
