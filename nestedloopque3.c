#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int found = 0;

    for (int a = 1; a <= N; a++) {
        for (int b = a + 1; b <= N; b++) {
            for (int c = b + 1; c <= N; c++) {
                if (a * a + b * b == c * c) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("None");
    }

    return 0;
}