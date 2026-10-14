
#include <stdio.h>

int main()
{
    int total, d, h, m, s;

    printf("Enter the time in seconds: ");
    scanf("%d", &total);

    d = total / 86400;
    total = total % 86400;

    h = total / 3600;
    total = total % 3600;

    m = total / 60;
    s = total % 60;

    printf("Time in ddd:hh:mm:ss is %03d:%02d:%02d:%02d\n",
           d, h, m, s);

    return 0;
}