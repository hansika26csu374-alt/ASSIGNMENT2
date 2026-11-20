#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            int rowMax = 1;
            int colMin = 1;

            for (int k = 0; k < c; k++) {
                if (a[i][k] > a[i][j]) {
                    rowMax = 0;
                    break;
                }
            }

            for (int k = 0; k < r; k++) {
                if (a[k][j] < a[i][j]) {
                    colMin = 0;
                    break;
                }
            }

            if (rowMax && colMin) {
                printf("%d %d %d", i, j, a[i][j]);
                return 0;
            }
        }
    }

    printf("None");

    return 0;
}
