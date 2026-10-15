
#include <stdio.h>

int main()
{
    char name[50];
    int units;
    float bill, surcharge, total;

    scanf(" %49[^\n]", name);
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.75;
    else if (units <= 300)
        bill = 100 * 1.75 + (units - 100) * 2.25;
    else
        bill = 100 * 1.75 + 200 * 2.25
               + (units - 300) * 3.50;

    if (bill < 100)
        bill = 100;

    if (bill > 1000)
        surcharge = bill * 0.15;
    else
        surcharge = 0;

    total = bill + surcharge;

    printf("Name: %s\n", name);
    printf("Total Bill = %.2f", total);

    return 0;
}
