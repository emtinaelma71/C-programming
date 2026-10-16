
#include <stdio.h>

int main() {
    int N, original;
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int i;

    scanf("%d", &N);
    original = N;

    printf("%d\n", original);

    for (i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n",
               N / notes[i], notes[i]);

        N = N % notes[i];
    }

    return 0;
}
