
#include <stdio.h>

int main()
{
    float r, area, circumference;
    float pi = 3.1416;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}