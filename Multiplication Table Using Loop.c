
#include <stdio.h>

int main()
{
    int X, i, Y;

    scanf("%d", &X);

    for (i = 1; i <= 10; i++)
    {
        Y = X * i;
        printf("%d * %d = %d\n", X, i, Y);
    }

    return 0;
}
