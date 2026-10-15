
#include <stdio.h>

int main()
{
    int day, month, year;
    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    char *suffix;

    scanf("%d-%d-%d", &day, &month, &year);

    if (month < 1 || month > 12 ||
        day < 1 || day > 31)
    {
        printf("Invalid Date");
        return 0;
    }

    if (day % 100 >= 11 && day % 100 <= 13)
        suffix = "th";
    else if (day % 10 == 1)
        suffix = "st";
    else if (day % 10 == 2)
        suffix = "nd";
    else if (day % 10 == 3)
        suffix = "rd";
    else
        suffix = "th";

    printf("%s %d%s, %d",
           months[month - 1], day, suffix, year);

    return 0;
}
