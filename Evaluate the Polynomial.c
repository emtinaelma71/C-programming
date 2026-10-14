
#include <stdio.h>

int main()
{
    float x, t, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    t = (x - 1) / x;

    y = t + (t * t) / 2
          + (t * t * t) / 3
          + (t * t * t * t) / 4;

    printf("Y = %.4f\n", y);

    return 0;
}