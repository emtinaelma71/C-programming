#include <stdio.h>

int main()
{
    int age, count = 0;
    int sum = 0;
    double average;

    while (1)
    {
        scanf("%d", &age);

        if (age < 0)
        {
            break;
        }

        sum = sum + age;
        count++;
    }

    average = (double)sum / count;

    printf("%.2lf\n", average);

    return 0;
}