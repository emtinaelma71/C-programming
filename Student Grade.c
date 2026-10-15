
#include <stdio.h>

int main()
{
    int score;

    scanf("%d", &score);

    if (score < 0 || score > 100)
        printf("Invalid Score");
    else if (score >= 80)
        printf("Grade A");
    else if (score >= 65)
        printf("Grade B");
    else if (score >= 50)
        printf("Grade C");
    else if (score >= 40)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
