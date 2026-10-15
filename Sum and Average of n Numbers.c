
#include <stdio.h>

int main()
{
    int n, i;
    float num, sum = 0, average;

    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        scanf("%f", &num);
        sum = sum + num;
    }

    average = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
