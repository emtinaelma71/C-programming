
#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int start, end, duration;
    int hours, minutes;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    start = h1 * 60 + m1;
    end = h2 * 60 + m2;

    duration = end - start;

    if (duration <= 0)
        duration += 24 * 60;

    hours = duration / 60;
    minutes = duration % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
           hours, minutes);

    return 0;
}
