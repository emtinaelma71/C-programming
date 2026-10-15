
#include <stdio.h>

int main()
{
    int n, i, count = 0;
    int sum = 0;
    float average;

    scanf("%d", &n);

    for (i = 1; i <= n; i += 3)
    {
        sum = sum + i;
        count++;
    }

    if (count == 0)
    {
        printf("No terms");
        return 0;
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
