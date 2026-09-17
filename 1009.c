#include <stdio.h>

int main()
{
    char NAME[100];
    double SALARY, SALES, TOTAL;

    scanf("%s", NAME);
    scanf("%lf", &SALARY);
    scanf("%lf", &SALES);

    TOTAL = SALARY + (SALES * 0.15);

    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
