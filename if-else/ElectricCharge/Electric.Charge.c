#include <stdio.h>
int main()
{
    int units;
    float charge;
    float subcharge;
    float total;
    printf("Enter no of units:");
    scanf("%d", &units);
    if (units <= 50)
    {
        charge = 0.50 * units;
    }
    else if (units <= 150 && units > 50)
    {
        charge = 25 + (0.75 * (units - 50));
    }
    else if (units <= 250 && units > 150)
    {
        charge = 100 + (1.20 * (units - 150));
    }
    else if (units > 250)
    {
        charge = 220 + (1.50 * (units - 250));
    }
    subcharge=0.2*(charge);
    total=charge+subcharge;
    printf("Electricity Bill = Rs. %.2f", total);
    return 0;
}