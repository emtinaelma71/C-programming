
#include <stdio.h>

int main() {
    int a, b, c, x, y, z;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if (x > y) {
        int t = x;
        x = y;
        y = t;
    }

    if (x > z) {
        int t = x;
        x = z;
        z = t;
    }

    if (y > z) {
        int t = y;
        y = z;
        z = t;
    }

    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
