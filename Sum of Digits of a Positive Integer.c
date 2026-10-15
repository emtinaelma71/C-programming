
#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid Input");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
