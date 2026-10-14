
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Enter two sides: ");
    scanf("%f %f", &a, &b);

    c = sqrt(a * a + b * b);

    printf("Hypotenuse = %.2f\n", c);

    return 0;
}