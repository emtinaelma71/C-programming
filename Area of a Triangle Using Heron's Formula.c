
#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, s, area;

    printf("Enter three sides: ");
    scanf("%f %f %f", &A, &B, &C);

    s = (A + B + C) / 2;

    area = sqrt(s * (s - A) * (s - B) * (s - C));

    printf("Area of triangle = %.2f\n", area);

    return 0;
}