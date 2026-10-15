
#include <stdio.h>

int main()
{
    int p1, p2;

    printf("0=Rock, 1=Paper, 2=Scissors\n");
    scanf("%d %d", &p1, &p2);

    if (p1 == p2)
        printf("Draw");
    else if ((p1 == 0 && p2 == 2) ||
             (p1 == 1 && p2 == 0) ||
             (p1 == 2 && p2 == 1))
        printf("Player 1 Wins");
    else if (p1 >= 0 && p1 <= 2 &&
             p2 >= 0 && p2 <= 2)
        printf("Player 2 Wins");
    else
        printf("Invalid Choice");

    return 0;
}
