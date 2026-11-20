#include <stdio.h>

int main() {
    int x, fx;

    scanf("%d", &x);

    if (x < 0) {
        fx = x * x + 2 * x + 1;
    } else if (x < 10) {
        fx = 3 * x + 2;
    } else {
        fx = 5 * x - 7;
    }

    printf("%d", fx);

    return 0;
}