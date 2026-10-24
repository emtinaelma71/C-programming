#include <stdio.h>

int main()
{
    int n, max, pos;
    int i;

    scanf("%d", &n);
    max = n;
    pos = 1;

    for (i = 2; i <= 100; i++)
    {
        scanf("%d", &n);

        if (n > max)
        {
            max = n;
            pos = i;
        }
    }

    printf("%d\n%d\n", max, pos);

    return 0;
}