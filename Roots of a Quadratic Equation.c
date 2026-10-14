
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D;
    float root1, root2, real, imag;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("It is not a quadratic equation.\n");
        return 0;
    }

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);
        printf("Equal roots = %.2f\n", root1);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-D) / (2 * a);

        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}