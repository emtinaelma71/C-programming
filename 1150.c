#include <stdio.h>

int main()
{
    int X, Z;
    int sum, count = 1;

    scanf("%d", &X);

    while (1)
    {
        scanf("%d", &Z);

        if (Z > X)
        {
            break;
        }
    }

    sum = X;

    while (sum <= Z)
    {
        X++;
        sum = sum + X;
        count++;
    }

    printf("%d\n", count);

    return 0;
}